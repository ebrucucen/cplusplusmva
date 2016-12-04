
#include "6_Shape.h"

class Rectangle: public Shape
{
public: 
    Rectangle() 
       : _width(4), _height(2) 
    {}   
    Rectangle(int initialwidth, int initialheight)
        :_width(initialwidth), _height(initialheight)
    {}
    int get_area()
    {
        return this->_width * this->_height;
    }
    int get_width(){return _width;}
    int get_height(){return _height;}
    void set_width(int width)
     {
         _width=width;
     }
     void set_height(int height)
     {
         _height=height;
     }
     void resize(int width, int height)
     {
         _width=width; _height=height;
     }
     int area() const{ return _height * _width;}
private:
    int _width;
    int _height;
    
};
//just storage, memory, compiler may put radius and circumference closer..