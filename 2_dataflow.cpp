#include <iostream>

int main(){

    int x(2);
    int y(0);
    
    y++;
    std::cout<<"y was 0, after y++ it is:"<<std::endl;
    std::cout<<y<<std::endl;
    y--;
    std::cout<<"y was 1, after y-- it is:"<<std::endl;
    std::cout<<y<<std::endl;

    if(x>1 && x<5){
        y++;
        std::cout<<"x>1 && x<5"<<std::endl;
    }
    else if(x>7|| y>2)
    {
        y--;
        std::cout<<"x>7 or y>2"<<std::endl;
    }
    else
    {
        y+2;
        std::cout<<"else for if"<<std::endl;
        std::cout<<y<<std::endl;
    }
 std::cout<<"For loop x has value:"<<std::endl;
  std::cout<<x<<std::endl;
 
for (int i (0); i<x ;i++){
    std::cout<<"i has value:"<<std::endl;
    std::cout<<i<<std::endl;
    }
while (x<4){
    int j(2);
    x+=j;
    }
    std::cout<<"real values"<<std::endl;

    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<"when y=x++"<<std::endl;

    y=x++;
    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<"when y=++x"<<std::endl;

    y=++x;
    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;

switch{
    
}
}

