#include <iostream>

int main()
{
int* p(new int(1));
std::cout<<"p: "<<p<<"*p: "<<*p<<std::endl;
*p = 2;
std::cout<<"p: "<<p<<"*p: "<<*p<<std::endl;

delete p;
std::cout<<"p: "<<p<<"*p: "<<*p<<std::endl;

for (int i(0); i<1000000; i++ ){

}
std::cout<<"p: "<<p<<"*p: "<<*p<<std::endl;
}