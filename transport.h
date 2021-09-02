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
    Transport();
    virtual void printSpecifications(); // Вывод свойств транспорта на терминал

    virtual std::string getTypeOfTransport();

};

Transport :: Transport() : numWheels(0), maxSpeed(0) {}

void Transport :: printSpecifications()
{
    if(this->getTypeOfTransport() == "Неизвестно")
        std::cout << "Неизвестный тип транспорта." << std::endl;

    else
        std::cout << "Тип транспорта: " << this->getTypeOfTransport()
                  << "\nКоличество колес: " << this->numWheels
                  << "\nМаксимальная скорость: " << this->maxSpeed << " км/ч." << std::endl;
};

std::string Transport :: getTypeOfTransport()
{
    return "Неизвестно";
};

#endif