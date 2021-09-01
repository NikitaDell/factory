#ifndef MOTOBIKE_H
#define MOTOBIKE_H

#include "transport.h"

class Motobike : public Transport
{
    std::string typeOfEngine; // Тип двигателя
public:
    Motobike() :  Transport(2, 140), typeOfEngine( "Двухтактный" ) {};
    std::string getTypeOfTransport() {return "Мотоцикл";};
    void printSpecifications()
    {
        this->Transport::printSpecifications();
        std::cout << "Тип двигателя: " << this->typeOfEngine << std::endl;
    }
};

#endif

