
#include "4_ObjectsTypes.h"
#include <iostream>
//using namespace Circle;

void calculate()
{
    //can't show real uninitalized...'
//    Circle sillyCircle{};
    Circle emptyCircle;
    std::cout<<"Radius of emptyCircle uninitialized: "<<emptyCircle._radius<<std::endl;
    std::cout<<"Circumference of emptyCircle uninitialized: "<<emptyCircle._circumference<<std::endl;
    emptyCircle._radius=4;
    emptyCircle._circumference=2;
    std::cout<<"Radius of emptyCircle assigned: "<<emptyCircle._radius<<std::endl;
    std::cout<<"Circumference of emptyCircle assigned: "<<emptyCircle._circumference<<std::endl;
    Circle newCircle(3,6);
    std::cout<<"Radius of newCircle assigned: "<<newCircle._radius<<std::endl;
    std::cout<<"Circumference of newCircle assigned: "<<newCircle._circumference<<std::endl;
    //int area(newCircle.getCircumference());
    //std::cout<<"area is: "<<area<<std::endl;
}

int main (){
    int a; //garbage value, uninitialized...
    std::cout <<a<<std::endl;
    int x =4; //initialized = memory storage
    std::cout <<x<<std::endl;
    int y(3); 
    std::cout <<y<<std::endl;
    
    int z=x; //Coping= initialized with a copy of x
    z=x; // Assignent 
    std::cout<<"z as assigment"<<std::endl;
    std::cout<<z<<std::endl;
  
    calculate();
    return 1;
}//z goes out of existence 
//y goes out of existence
//x goes out of existence

