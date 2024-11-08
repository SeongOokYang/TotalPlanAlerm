#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <string>
#include "date.h"

class Schedule {
    public:
        Schedule(Date date, std::string title, std::string description);
        Date getDate();
        void setDate(Date date);

        std::string getDesp();
        void setDesp(std::string desp);

        std::string getTitle();
        void setTitle(std::string title);
    
    private:
        Date date_;
        std::string description_;
        std::string title_;

};

#endif