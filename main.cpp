#include <iostream>
#include "factory.h"


int main(int argc, char* argv[])
{
    Factory factory;
    Transport* tr[argc - 1];
    ///
    for(int i = 1; i < argc; i++)
    {
        tr[i] = factory.createTransport(std::atoi(argv[i]));
    }
    ///
    for(int i = 1; i < argc; i++)
    {
        tr[i]->printSpecifications();
        std::cout << std::endl;
    }
    ///
    for(int i = 1; i < argc; i++)
    {
        delete tr[i];
        tr[i] = nullptr;
    }    
    return 0;
}



