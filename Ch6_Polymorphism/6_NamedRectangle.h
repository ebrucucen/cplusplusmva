#include "6_Rectangle.h"
#include <string>

class NamedRectangle:public Rectangle {
public:
    NamedRectangle(){}
    NamedRectangle(std::string initialName, int initial_width, int initial_height)
        : Rectangle(initial_width, initial_height), _name(initialName)
    {}
    std::string get_Name() const {return _name;}
private: 
  
    std::string _name;
};