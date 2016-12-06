#include "4_ObjectsTypes.h"
#include <iostream>
//using namespace Circle;

void calculate()
{
    //can't show real uninitalized...'
//    Circle sillyCircle{};
    Circle emptyCircle;
    std::cout<<"Radius of emptyCircle uninitialized: "<<emptyCircle.get_radius()<<std::endl;
    std::cout<<"Color of emptyCircle uninitialized: "<<emptyCircle.get_color()<<std::endl;
    std::cout<<"Constant color of newCircle assigned: "<<emptyCircle.get_constcolor()<<std::endl;
    emptyCircle.set_radius(4);
    emptyCircle.set_color('b');
//won't work:
//  emptyCircle.set_constcolor('b');
    std::cout<<"Radius of emptyCircle assigned: "<<emptyCircle.get_radius()<<std::endl;
    std::cout<<"Color of emptyCircle assigned: "<<emptyCircle.get_color()<<std::endl;
    std::cout<<"Constant color of newCircle assigned: "<<emptyCircle.get_constcolor()<<std::endl;
    Circle newCircle(3,'w');
    std::cout<<"Radius of newCircle assigned: "<<newCircle.get_radius()<<std::endl;
    std::cout<<"Color of newCircle assigned: "<<newCircle.get_color()<<std::endl;
    std::cout<<"Constant color of newCircle assigned: "<<newCircle.get_constcolor()<<std::endl;
    
  
}
int main(){
    calculate();
    return 0;
}
