#include "6_Triangle.h"
#include "6_NamedRectangle.h"
#include <iostream>
void double_dimensions(Rectangle& rectangle) 
{
    rectangle.resize(rectangle.get_width()*2, rectangle.get_height()*2);
}

int computeArea (const Shape& a_shape)
{
    return a_shape.area();
}

int main(){
    NamedRectangle emmy_NamedRectangle("Emmy",3,4);
    int emmy_Area(emmy_NamedRectangle.get_area());
    std::cout<<"Original: Width: "<<emmy_NamedRectangle.get_width()<<" Height: "<<emmy_NamedRectangle.get_height()<<" Area: "<<emmy_Area<<std::endl;
    
    //This does work as small into bigger:
    Rectangle unnamed_Rectangle(emmy_NamedRectangle);
    int unnamed_Area(unnamed_Rectangle.get_area());
    std::cout<<"Copy of named rectangle: Width: "<<unnamed_Rectangle.get_width()<<" Height: "<<unnamed_Rectangle.get_height()<<" Area: "<<unnamed_Area<<std::endl;
/*This will not work
error: no member named 'get_Name' in 'Rectangle'  
    std::cout<<"name exist on unnamed rectangle:"<<unnamed_Rectangle.get_Name()<<std::endl;
*/
    
    Rectangle& emmy_ref(emmy_NamedRectangle);
    emmy_ref.resize(5,9);
    emmy_Area=emmy_NamedRectangle.get_area();
    std::cout<<"After resize: Width: "<<emmy_NamedRectangle.get_width()<<" Height: "<<emmy_NamedRectangle.get_height()<<" Area: "<<emmy_Area<<std::endl;

    std::string emmyName=emmy_NamedRectangle.get_Name();
    std::cout<<"name of named rectangle:" <<emmyName<<std::endl;
/* this will not work: 
error: no member named 'get_Name' in 'Rectangle' 
    std::string emmyRefName=emmy_ref.get_Name();
    std::cout<<"name of named rectangle:" <<emmyRefName<<std::endl;
*/
    double_dimensions(emmy_NamedRectangle);
    emmy_Area=emmy_NamedRectangle.get_area();
    std::cout<<"After double dimensions: Width: "<<emmy_NamedRectangle.get_width()<<" Height: "<<emmy_NamedRectangle.get_height()<<" Area: "<<emmy_Area<<std::endl;
    double_dimensions(unnamed_Rectangle);
    unnamed_Area=unnamed_Rectangle.get_area();
    std::cout<<"After double dimensions: Width: "<<unnamed_Rectangle.get_width()<<" Height: "<<unnamed_Rectangle.get_height()<<" Area: "<<unnamed_Area<<std::endl;

/*This will not work:
//error: variable type 'Shape' is an abstract class  
    Shape a_Shape();
or
    Rectangle a_rectangle;
    std::cout<<  a_rectangle.get_height()<<std::endl;
    Shape a_Shape(a_rectangle);
*/

    Triangle a_triangle(2,2);
    emmy_Area=computeArea(emmy_NamedRectangle);
    int triangle_Area=computeArea(a_triangle);
    std::cout<<"compute Area: "<<emmy_Area<<"triangle area: "<<triangle_Area<<std::endl;

return 0;
}