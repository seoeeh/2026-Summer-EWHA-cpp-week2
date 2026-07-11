#include "timeOfDay.h"

int main()
{
    using namespace ParkSeohee2114012;
    timeOfDay t1, t2;
    std::cin >> t1 >> t2;
    std::cout << t1 << " " << t2 << '\n';
    std::cout << ++t2 << '\n';
    std::cout << t2++ << '\n';
    std::cout << t2 << '\n';

    if (t1 == t2) std::cout << "same\n";
    else std::cout << "different\n";

    std::cout << t1+t2 << std::endl;
    
    return 0;
    
}

namespace ParkSeohee2114012
{
    bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
    {
        return t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute();
    }
}
