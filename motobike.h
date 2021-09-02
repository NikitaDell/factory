#ifndef MOTOBIKE_H
#define MOTOBIKE_H

#include "transport.h"

class Motobike : public Transport
{
    std::string typeOfEngine; // Тип двигателя
public:
    Motobike();
    std::string getTypeOfTransport();
    void printSpecifications();
};

Motobike::Motobike() :  Transport(2, 140), typeOfEngine( "Двухтактный" ) 
{
};

std::string Motobike::getTypeOfTransport() 
{
    return "Мотоцикл";
};

void Motobike::printSpecifications()
{
    this->Transport::printSpecifications();
    std::cout << "Тип двигателя: " << this->typeOfEngine << std::endl;
}

#endif