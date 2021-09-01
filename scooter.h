#ifndef SCOOTER_H
#define SCOOTER_H

#include "transport.h"

class Scooter : public Transport
{
    std::string typeOfScooter; // класс самокатa
public:
    Scooter() :  Transport(3, 20), typeOfScooter("Электрический") {};
    std::string getTypeOfTransport() {return "Самокат";};
    void printSpecifications()
    {
        this->Transport::printSpecifications();
        std::cout << "Класс самоката: " << this->typeOfScooter << std::endl;
    }
};

#endif