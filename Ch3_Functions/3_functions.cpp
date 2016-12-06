#include "3_Utilities.h"
#include <iostream>
#include <string>
//#include <std>
using namespace std;
//using decoration:
using std::cout;
int main()
{
    int i(4);
    int j(AddTwo(i));
    cout<<"int j(AddTwo(4))"<<std::endl;
    std::cout<<j<<std::endl;
    AddTwo(j);
    std::cout<<"AddTwo(j);"<<std::endl;
    std::cout<<j<<std::endl;
    j=AddTwo(j);
    std::cout<<"j=AddTwo(j)"<<std::endl;
    std::cout<<j<<std::endl;
    int const a=5;
    const int b=6;
 //   a=7; //won't compile: C3891:you cannot assign a variable that is a constant'
 //   b=8; //won't compile'
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    
    return 0;
}