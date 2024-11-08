#include "date.h"

int Date::monthCheck() {
    int thirtyOneSize = sizeof(THIRTYONE) / sizeof(THIRTYONE[0]);

    if(month_ == 2) {
        return 0;
    }else {
        if(std::find(THIRTYONE, THIRTYONE + thirtyOneSize, month_) != THIRTYONE + thirtyOneSize) {
            return 1;
        }else {
            return 2;
        }
    }
}

void Date::setYear(unsigned int num) {
    year_ = num;
}

void Date::setMonth(int num) {
    if(num>0 && num<13) {
        month_ = num;
    }else if(num <= 0){
        year_ -= num / 12;
        month_ = 12 - num;
    }else {
        year_ += num / 12;
        month_ = num - 12;
    }
}

void Date::setDay(int num) {
    int checkVal = monthCheck();
    switch(checkVal){
        case 0:
            if ((year_ % 4 == 0 && year_ % 100 != 0) || (year_% 400 == 0)) {
                maxDay_ = 29;
            }else {
                maxDay_ = 28;
            }
        
        case 1:
            maxDay_ = 31;
        
        case 2:
            maxDay_ = 30;
    
    }
    
    if(num > 0 && num <= maxDay_) {
        day_ = num;
    }else if(num <= 0){
        month_ -= num / maxDay_;
        day_ = maxDay_ - num;
    }else{
        month_ += num / maxDay_;
        day_ = num - maxDay_;
    }
}

Date::Date(unsigned int year, unsigned int month, unsigned int day) {
    setYear(year);
    setMonth(month);
    setDay(day);
}

void Date::operator+(unsigned int num) {
    int newDay = day_ + num;
    setDay(newDay);
}

void Date::operator-(unsigned int num) {
    int newDay = day_ - num;
    setDay(newDay);
}

std::string Date::getDate() {
    return std::to_string(year_) + "-" + std::to_string(month_) + "-" + std::to_string(day_);
}