#include "6_Triangle.h"
//#include "6_Rectangle.h"
#include "6_NamedRectangle.h"

void double_dimensions(Rectangle& rectangle) 
{
    rectangle.resize(rectangle.get_width(), rectangle.get_height());
}

int computeArea (const Shape& a_shape)
{
    return a_shape.area();
}

int main(){
NamedRectangle emmy_NamedRectangle("Emmy",3,4);
}