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
    void parVal(timeOfDay v){ v+= 1;}
    void parRef(timeOfDay& r){r+= 1;}
    void parPtr(timeOfDay* p){*p +=1;}
    timeOfDay retVal(timeOfDay v){v+= 1; return v;}
    timeOfDay& retRef(timeOfDay& r){r+= 1; return r;}
    timeOfDay* retPtr(timeOfDay* p){*p +=1; return p;}
}
int main()
{
    using namespace ParkSeohee2114012;
    
    timeOfDay val{11,30};
    std::cout << val << " ";
    
    parVal(val);
    std::cout << val << std::endl;
    
    timeOfDay& ref{val};
    std::cout << ref << " ";
    
    parRef(ref);
    std::cout << ref << std::endl;
    
    timeOfDay* ptr{&val};
    std::cout << *ptr << " ";

    parPtr(ptr);
    std::cout << *ptr << std::endl;

    val = timeOfDay{15, 30};
    std::cout << val << " " <<retVal(val) << "\n";
    std::cout << ref << " " << retRef(ref) << "\n";
    std::cout << *ptr << " " <<*retPtr(ptr) << "\n";

    timeOfDay* tPtr {new timeOfDay};
    tPtr->setHour(18);
    tPtr->setMinute(30);
    std::cout << *tPtr << std::endl;
    delete tPtr;
    
        // timeOfDay t1, t2;
        // std::cin >> t1 >> t2;
        // std::cout << t1 << " " << t2 << '\n';
        // std::cout << ++t2 << '\n';
        // std::cout << t2++ << '\n';
        // std::cout << t2 << '\n';

    return 0;
    
}

namespace ParkSeohee2114012
{
    bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
    {
        return t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute();
    }
}
