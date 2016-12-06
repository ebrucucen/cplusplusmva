#include <iostream>

void multiplybyTwo(int x)
{
    x=x*2;
}

int main ()
{
    int x(1);
    std::cout<<"x value before func is: "<<x<<std::endl;
    multiplybyTwo(x);
    std::cout<<"x value after func is: "<<x<<std::endl;
/* error: default initialization of an object of const type 'const int'
    const int y;
*/
    int& xref(x);
    const int y=2;
    /* won't work as compile does not allow constant qualifier to be dropped'
    error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier
    int& yref(y);
    */
    int const& yconstref=y;
    std::cout<<"x: " <<x<<std::endl;
    std::cout<<"xref: " <<xref<<std::endl;
    std::cout<<"y: " <<y<<std::endl;
//    std::cout<<"yref: "<<yref<<std::endl;
    std::cout<<"const yref: "<<yconstref<<std::endl;

    xref=3;
/* won't work as yref is const& type
    yconstref=5;
or
    y=5;
*/
    std::cout<<"x: " <<x<<std::endl;
    std::cout<<"xref: " <<xref<<std::endl;
    std::cout<<"y: " <<y<<std::endl;
  //  std::cout<<"yref: "<<yref<<std::endl;
    std::cout<<"const yref: "<<yconstref<<std::endl;

}