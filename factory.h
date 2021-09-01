#ifndef FACTORY_H
#define FACTORY_H

#include "motobike.h"
#include "scooter.h"
#include "car.h"
#include "bus.h"

class Factory
{
public:
    Transport* createTransport(int idTransport)
    {
        Transport *transport;
        
        switch (idTransport)
        {
            case 0:
                transport = new class Motobike;
                break;
            case 1:
                transport = new class Scooter;
                break;
            case 2:
                transport = new class Car;
                break;
            case 3:
                transport = new class Bus;
                break;
            default:
                transport = new class Transport;
                break;
        }
        return transport;
    };

};

#endif