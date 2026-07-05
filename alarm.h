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
        
        void print() const
        {
            if (wakeTime.getHour() < 10) std::cout << "0";
            std::cout << wakeTime.getHour() << ":"; 
            if (wakeTime.getMinute() < 10) std::cout << "0";
            std::cout << wakeTime.getMinute();

            // 이어서 알람 상태 출력
            std::cout << " alarm is " << ((inActive)? "on" : "off") << std::endl; //ifelse구문으로해도딤
        }
        const timeOfDay& getWakeTime() const { return wakeTime; }
        void setWakeTime(const timeOfDay& t) { wakeTime = t; }
    };
}
