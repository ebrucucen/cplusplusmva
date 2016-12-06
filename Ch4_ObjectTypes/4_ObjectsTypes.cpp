#include <iostream>

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
    return 1;
}//z goes out of existence 
//y goes out of existence
//x goes out of existence

