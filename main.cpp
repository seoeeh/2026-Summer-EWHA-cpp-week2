#include "alarm.h"
#include <array>
namespace ParkSeohee2114012
{
    void printAlarmArray(const alarm a[], const int n)
    {
        for (int i = 0; 
            i<n; ++i)
            std::cout << a[i];
    }
}
int main()
{
    using namespace ParkSeohee2114012;

    const int n{4};
    alarm a[n];
    a[0] = alarm{"moring", {6,0}, 1};

    a[1].setName("class");
    a[1].setWakeTime({9,0});
    a[1].setActive(1);
    a[2].input();
    
    std::cin >> a[3];
    printAlarmArray(a,n);

    std::array<alarm, n>b;
    for (int i = 0; i<b.size(); ++i)
        b.at(i) = a[i];//b[i]
    for(const auto& bi : b)
        bi.print();
    // timeOfDay t1, t2;
    // std::cin >> t1 >> t2;
    // std::cout << t1 << " " << t2 << '\n';
    // std::cout << ++t2 << '\n';
    // std::cout << t2++ << '\n';
    // std::cout << t2 << '\n';

    // if (t1 == t2) std::cout << "same\n";
    // else std::cout << "different\n";

    // std::cout << t1+t2 << std::endl;
    
    return 0;
    
}

namespace ParkSeohee2114012
{
    bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
    {
        return t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute();
    }
}
