#include "schedule.h"

Schedule::Schedule(Date date, std::string title, std::string desp) : date_(date), title_(title), description_(desp){};

Date Schedule::getDate() { return date_; };

void Schedule::setDate(Date date) {
    date_ = date;
}

std::string Schedule::getDesp() { return description_; };

void Schedule::setDesp(std::string desp) {
    description_ = desp;
}

std::string Schedule::getTitle() { return title_; };

void Schedule::setTitle(std::string title) {
    title_ = title;
}