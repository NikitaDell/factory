#ifndef CAR_H
#define CAR_H

#include "transport.h"

class Car : public Transport
{
    std::string typeOfGearbox; // Тип коробки передач
public:
    Car() :  Transport(4, 150), typeOfGearbox("Механическая") {};
    std::string getTypeOfTransport() {return "Автомобиль";};

    void printSpecifications()
    {
        this->Transport::printSpecifications();
        std::cout << "Тип коробки передач: " << this->typeOfGearbox << std::endl;
    }
};

#endif
