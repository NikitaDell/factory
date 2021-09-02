#ifndef BUS_H
#define BUS_H

#include "transport.h"

class Bus : public Transport
{
    int capacity; // Вместимость автобуса (количество мест) 
public:
    Bus();
    std::string getTypeOfTransport();
    void printSpecifications();
};

Bus::Bus() :  Transport(6, 100), capacity(200) 
{
};
    
std::string Bus::getTypeOfTransport()
{ 
    return "Автобус"; 
};

void Bus::printSpecifications()
{
    this->Transport::printSpecifications();
    std::cout << "Количество мест:  " << this->capacity << std::endl;
}
#endif
