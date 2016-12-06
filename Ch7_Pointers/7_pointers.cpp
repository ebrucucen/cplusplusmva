#include <iostream>

int main(){
    
    int x(1);
    int y(2);
    //y is a integer pointer pointing to the x's reference address
    int* pointer_to_x(&x);
 
    std::cout<<"value of x|*pointer_to_x:  "<<x<<" | "<<*pointer_to_x<<std::endl;
    std::cout<<"addresses of &x|pointer_to_x:  "<<&x<<" | "<<pointer_to_x<<std::endl;

   //change the pointers value.
    *pointer_to_x=5;
    std::cout<<"value of x|*pointer_to_x:  "<<x<<" | "<<*pointer_to_x<<std::endl;
    std::cout<<"addresses of &x|pointer_to_x|&pointer_to_x:  "<<&x<<" | "<<pointer_to_x<<" | "<<&pointer_to_x<<std::endl;
//    &y;
    int* another_pointer(&x);
    std::cout<<"another pointer referenced x"<<std::endl;
    std::cout<<"x| &x|pointer_to_x|&pointer_to_x"<<x<<" | "<<&x<<" | "<<pointer_to_x<< " | " <<&pointer_to_x<<" | " << *pointer_to_x<< std::endl;

    another_pointer=&y;
    int j(*another_pointer);
    std::cout<<"another pointer referenced y"<<std::endl;    
    std::cout<<"x| &x|pointer_to_x|&pointer_to_x"<<x<<" | "<<&x<<" | "<<pointer_to_x<< " | " <<&pointer_to_x<<" | " << *pointer_to_x<< std::endl;
    std::cout<<"another_pointer| &another_pointer| *another_pointer|j|&j"<<another_pointer<<" | "<<&another_pointer<<" | "<<*another_pointer<<j<< " | " <<&j<<std::endl;

    another_pointer=nullptr;
//    j= *another_pointer;
    std::cout<<"another pointer assigned as another pointer"<<std::endl;
    std::cout<<"x| &x|pointer_to_x|&pointer_to_x"<<x<<" | "<<&x<<" | "<<pointer_to_x<< " | " <<&pointer_to_x<<" | " << *pointer_to_x<< std::endl;
    std::cout<<"another_pointer| &another_pointer| *another_pointer|j|&j"<<another_pointer<<" | "<<&another_pointer<<" | "<<*another_pointer<<j<< " | " <<&j<<std::endl;
    return 0;
}