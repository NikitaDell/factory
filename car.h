#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport
{
    std::string typeOfGearbox; // Тип коробки передач
public:
    Car();
    std::string getTypeOfTransport();
    void printSpecifications();
};

Car::Car() :  Transport(4, 150), typeOfGearbox("Механическая") 
{
};

std::string Car::getTypeOfTransport() 
{
    return "Автомобиль";
};

void Car::printSpecifications()
{
    this->Transport::printSpecifications();
    std::cout << "Тип коробки передач: " << this->typeOfGearbox << std::endl;
}

#endif
