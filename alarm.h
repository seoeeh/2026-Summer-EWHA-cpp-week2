#pragma once
#include "timeOfDay.h"

namespace ParkSeohee2114012
{
    class alarm
    {
        timeOfDay wakeTime;
        bool inActive;
    public:
        alarm(timeOfDay t = timeOfDay{0,0}, bool a = false):wakeTime{t}, inActive(a){} //멤버변수초기화
        void print()
        {
            wakeTime.print();
            std::cout << " alarm is " << ((inActive)? "on" : "off") <<  "\n"; //ifelse구문으로해도딤
           //dayofyear에 holiday에서 프린트함수 불러온것처럼 하기
        }
       const timeOfDay& getWakeTime() const {return wakeTime;}
        void setWakeTime(const timeOfDay& t){wakeTime = t;}
        //wakeTime 참조형식으로 구현하자
    };
}
//클래스멤버의접근함수 -wakeTime의 접근함수를 참조형식으로 구현