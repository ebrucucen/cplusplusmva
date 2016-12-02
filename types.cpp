#include <iostream>

int main() {
    int i(2);   //2
    std::cout <<"Int i =2" <<std::endl;
    std::cout <<i <<std::endl;
    i=3.2; //3
    std::cout <<i <<std::endl;
    i=2.9; //2
    std::cout <<i <<std::endl;
    i=-1; //-1
    std::cout <<i <<std::endl;


    unsigned int u (0); //0
    std::cout <<"Unsigned int u=0" <<std::endl;
    std::cout <<u<<std::endl;
    u=-2; //4294967294
    std::cout <<u<<std::endl;

    double d (2.7); //2.70000002 
    std::cout <<"Double d=2.7" <<std::endl;
    std::cout <<d<<std::endl;
    i=d;//2
    std::cout <<i <<std::endl;
    d=i; //2.7
    std::cout <<d<<std::endl;

    bool flag (true); //1
    std::cout <<"Bool flag=true" <<std::endl;
    std::cout <<flag <<std::endl;
    flag=false; //0
    std::cout <<flag <<std::endl;
    flag=7;//1
    std::cout <<flag <<std::endl;


    return 0;
}

//g++ "/Users/demokritos/work/src/github.com/cplusplus/types.cpp" && ./a.out