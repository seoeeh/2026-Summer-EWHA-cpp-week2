// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";
#pragma once
#include <iostream>
namespace ParkSeohee2114012
{
    class timeOfDay
    {
        int hour{};
        int minute{};

        void testHour()
        {
            if ((hour < 0) || (hour>23)) {
                std::cout << "illegal month value!\n";
                std::exit(0);
            }
        }
        void testMinute()
        {
            if ((minute < 0) || (minute >59)) {
                std::cout << "Illegal minute value!\n";
                std::exit(1);
            }
        }
    public:
        timeOfDay(int h = 0, int m = 0):hour{h}, minute{m}{testHour();testMinute();}
        void input()
        {
            std::cout << "Enter the hour as a number(0~23): ";
            std::cin >> hour; testHour();
            std::cout << "Enter the minute of the number(0~59): ";
            std::cin >> minute; testMinute();
        }
        void setHour(int h) {hour = h; testHour();}
        void setMinute(int m) { minute = m; testMinute();}
        void print() const 
            {
                if (hour < 10) std::cout << "0";
                std::cout << hour << ":"; 
                if (minute < 10) std::cout << "0";
                std::cout << minute << std::endl;
            }
        int getHour() const { return hour; }
        int getMinute() const { return minute; }
    };
}


// 3. alarm.h: alarm 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: timeOfDay형 wakeTime, bool형 inActive
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력, hour:minute alarm is on/off 형식
// -wakeTime의 접근함수를 참조형식으로 구현

// 4. main.cpp: 테스트
// 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compareTimeOfDay 정의: 매개변수는 const timeOfDay 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교
// -main
// alarm 클래스형 객체1 선언, print함수 호출
// alarm 클래스형 객체2 초기값을 넣어서 선언, print함수 호출
// 비멤버함수 compareTimeOfDay를 호출하여 그 리턴값이 true면 same, false면 different를 표준스트림으로 출력
