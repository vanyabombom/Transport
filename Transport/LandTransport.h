#pragma once
#include "Transport.h"
using namespace std;

class LandTransport : public Transport
{
protected:
    bool HasWheels;
    int HorsePowers;
public:
    LandTransport(string n, double s, int c, bool w, int hp) : Transport(n, s, c), HasWheels(w), HorsePowers(hp)
    {

    }
    void Output() const
    {
        Transport::Output();
        cout << "Has wheels: " << HasWheels << "\nHorse powers: " << HorsePowers << endl;
    }
};

class Car : public LandTransport
{
private:
    bool electricEngine;
public:
    Car(string n, double s, int c, int w, int hp, bool electricEngine) : LandTransport(n, s, c, w, hp), electricEngine(electricEngine) {}
    void Output() const
    {
        LandTransport::Output();
        cout << "Elecatic engine: " << electricEngine << endl;
    }
};

class HorseDrawn : public LandTransport
{
private:
    string Animal;
public:
    HorseDrawn(string n, double s, int c, int w, int hp, string animal) : LandTransport(n, s, c, w, hp), Animal(animal) {}
    void Output() const
    {
        LandTransport::Output();
        cout << "Animal: " << Animal << endl;
    }
};

class Train : public LandTransport
{
private:
    int WagonNum;
public:
    Train(string n, double s, int c, bool hw, int hp, int wn) : LandTransport(n, s, c, hp, wn), WagonNum(wn) {}

    void Output() const
    {
        LandTransport::Output();
        cout << "Number of Wagons: " << WagonNum << endl;
    }
};