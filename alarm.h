#pragma once
#include "timeOfDay.h"

namespace ParkSeohee2114012
{
    class alarm
    {
        timeOfDay wakeTime;
        bool inActive;
    public:
        alarm(timeOfDay t = timeOfDay{1,1}, bool a = false):wakeTime{t}, inActive(a){} 
        void print() 
        {
            wakeTime.print();
            std::cout << " alarm is " << ((inActive) ? "on" : "off") << "\n"; //ifelse구문으로해도딤
        }
        const timeOfDay& getWakeTime() const { return wakeTime;}
        void setWakeTime(const timeOfDay& t) { wakeTime = t; }
    };
}
