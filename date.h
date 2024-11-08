#ifndef DATE_H
#define DATE_H
#include <string>
#include <algorithm>

const int THIRTYONE[] = {4,6,9,11}; //check = 2

class Date {
    public:
        Date(unsigned int year, unsigned int month, unsigned int day);
        void setYear(unsigned int num);
        void setMonth(int num);
        void setDay(int num);
        void operator+(unsigned int num);
        void operator-(unsigned int num);
        std::string getDate(); 

    private:
        unsigned int year_;
        unsigned int month_;
        unsigned int day_;
        unsigned int maxDay_;
        int monthCheck();
};

#endif