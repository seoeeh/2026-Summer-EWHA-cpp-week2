#pragma once
#include "timeOfDay.h"

namespace ParkSeohee2114012
{
    void 
    class alarm
    {
        timeOfDay wakeTime;
        bool inActive;
    public:
        alarm(timeOfDay t = timeOfDay{1,1}, bool a = false):wakeTime{t}, inActive(a){} 
        void print() 
        {
          if (wakeTime.getHour() < 10) std::cout << "0";
    std::cout << wakeTime.getHour() << ":"; 
    
    if (wakeTime.getMinute() < 10) std::cout << "0";
    std::cout << wakeTime.getMinute(); 

    std::cout << " alarm is " << ((inActive) ? "on" : "off") << "\n"; //ifelse구문으로해도딤
        }
        const timeOfDay& getWakeTime() const { return wakeTime;}
        void setWakeTime(const timeOfDay& t) { wakeTime = t; }
    };
}
