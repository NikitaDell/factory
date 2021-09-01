#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>

class Transport
{
private:
    int numWheels;
    int maxSpeed;

protected:
    Transport(int _numWheels, int _maxSpeed) : numWheels(_numWheels), maxSpeed(_maxSpeed) {};

public:
    Transport() : numWheels(0), maxSpeed(0) {};

    virtual void printSpecifications()
    {
        if(this->getTypeOfTransport() == "Неизвестно")
            std::cout << "Неизвестный тип транспорта." << std::endl;

        else
            std::cout << "Тип транспорта: " << this->getTypeOfTransport()
                      << "\nКоличество колес: " << this->numWheels
                      << "\nМаксимальная скорость: " << this->maxSpeed << " км/ч." << std::endl;
    };
    virtual std::string getTypeOfTransport()
    {
        return "Неизвестно";
    };

};

#endif