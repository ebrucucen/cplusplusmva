#pragma once 
#include "6_Shape.h"
class Triangle: public Shape
{
public:
    Triangle():
        _width(0),_height(0)
    {}
    Triangle(int initial_width, int initial_height):
        _width(initial_width), _height(initial_height)
    {}
    int get_width() const {return _width;}
    int get_height() const {return _height;}
    int area() const{return _width* _height/2;}

    void resize (int width, int height){_width=width; _height=height;}
private:
    int _width;
    int _height;
};