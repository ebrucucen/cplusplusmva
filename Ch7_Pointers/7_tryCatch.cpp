#include <iostream>
int main()
{
    try{
        int *p(new int(2));
        *p=2;
//This won't work as Microsoft C++ Library accepts string parameter, not linux:
//        throw std::exception('Trouble\n');
//This will work but we don't want without message
//          throw std::exception();
//So we use:
        throw std::runtime_error("Trouble\n");

    }
    catch (const std::exception& e)
    {
    std::cout<<"Exception caught:" << e.what();
    }
    return 0;
}