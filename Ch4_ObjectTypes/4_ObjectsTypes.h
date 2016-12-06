
#include <cmath>
class Circle
{
public: 
    Circle() 
       : _radius(1), _color('a'), _constcolor()
    {}   
    Circle(int initialradius, char initialcolor)
        :_radius(initialradius), _color(initialcolor), _constcolor('y')
    {}
    int get_circumference()
    {
        return this->_radius * M_PI;
    }
    int get_radius()
    {
        return _radius;
     }
     char get_color()
     {
         return _color;
     }
     void set_color(char color)
     {
         _color=color;
     }
     void set_radius(int radius)
     {
         _radius=radius;
     }
//can't do:
/*     void set_constcolor(char color)
     {
         _constcolor=color;
     }
*/   char const get_constcolor()
     {
         return _constcolor;
     }
private:
    int _radius;
    char _color;
    char const _constcolor;

};
//just storage, memory, compiler may put radius and circumference closer..