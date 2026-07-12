#include "timeOfDay.h"

namespace ParkSeohee2114012
{
    class timePtr
    {
        timeOfDay* ptr;
    public: 
        timePtr(int h = 0, int m = 0):ptr( new timeOfDay{h,m}){}
            ~timePtr(){delete ptr;}
            timePtr(const timePtr& copy){
                //std::cout << "copy constructor\n";
                ptr = copy.ptr ? new timeOfDay{*copy.ptr} : nullptr;//copy.ptr;
            }
            timePtr& operator=(const timePtr& copy){//std::cout << "copy =\n";
                if (this != &copy)
                {
                    delete ptr;
                    ptr = copy.ptr ? new timeOfDay{*copy.ptr} : nullptr;
                }
                return *this;
            }            
            timePtr(timePtr&& move) noexcept{
                //std::cout << "move constructor\n";
                ptr = move.ptr;
                move.ptr = nullptr;
            }
            timePtr& operator=(timePtr&& move) noexcept {//std::cout << "move =\n";
                if (this != &move) {                    
                    delete ptr;
                    ptr = move.ptr;
                    move.ptr = nullptr;
                }
            return *this;            
        }
        void print() const
        {
            if (ptr) {ptr->print();
            std::cout << '\n';
            }
            else
                std::cout << "no time data (nullptr)\n";
        }
    };
}