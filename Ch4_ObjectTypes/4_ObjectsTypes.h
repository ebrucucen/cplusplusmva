#pragma once 
class Circle
{
public: 
    Circle() 
       : _radius(), _circumference()
    {}   
    Circle(int initialradius, int initialcircum)
        :_radius(initialradius), _circumference(initialcircum)
    {}
    int getCircumference()
    {
        return this->_radius * this->_circumference;
    }
//private:
    int _radius;
    int _circumference;

};
//just storage, memory, compiler may put radius and circumference closer..