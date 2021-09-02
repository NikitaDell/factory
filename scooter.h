#ifndef SCOOTER_H
#define SCOOTER_H

#include "transport.h"

class Scooter : public Transport
{
    std::string typeOfScooter; // класс самокатa
public:
    Scooter();
    std::string getTypeOfTransport();
    void printSpecifications();
};

Scooter::Scooter() :  Transport(3, 20), typeOfScooter("Электрический") 
{
};

std::string Scooter::getTypeOfTransport() 
{
    return "Самокат";
};

void Scooter::printSpecifications()
{
    this->Transport::printSpecifications();
    std::cout << "Класс самоката: " << this->typeOfScooter << std::endl;
};
#endif