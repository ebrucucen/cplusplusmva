
#include <string>
#include <iostream>
class Squarker{
    public:
        Squarker()
        {
            std::cout<<"constructing"<<std::endl;
        }
        Squarker(std::string name)
        {
            _name=name;
            std::cout<<"constructing with name: "<<name<<std::endl;
        }
        ~Squarker()
        {
            std::cout<<"deleting object "<<_name<< std::endl;
        }
        private:
        std::string _name;
};

void allocate(){
    try{
        //scope bound 
        Squarker inner("Inner");
        std::unique_ptr<Squarker> ps(new Squarker("Heap"));
        throw(std::runtime_error("Trouble"));
        //without delete statement destructor will be called...
    }catch(const std::exception& e)
    {
        std::cout<< "Exception caught\n"<< e.what()<< std::endl;
    }
}
int main(){
//Squarker noname;
//Squarker Noether("Noether");

    allocate();
}
