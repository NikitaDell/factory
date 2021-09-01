#ifndef BUS_H
#define BUS_H

#include "transport.h"

class Bus : public Transport
{
    int capacity; // Вместимость автобуса (количество мест) 
public:
    Bus() :  Transport(6, 100), capacity(200) {};
    
    std::string getTypeOfTransport(){ 
        return "Автобус"; 
    };
    
    void printSpecifications()
    {
        this->Transport::printSpecifications();
        std::cout << "Количество мест:  " << this->capacity << std::endl;
    }
};

#endif
