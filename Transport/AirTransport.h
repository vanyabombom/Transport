#pragma once
#include "Transport.h"
using namespace std;

class AirTransport : public Transport
{
protected:
    int WingSpan;

public:
    AirTransport(string n, double s, int c, int ws) : Transport(n, s, c), WingSpan(ws) {}

    void Output() const
    {
        Transport::Output();
        cout << "Wing Span: " << WingSpan << endl;
    }
};

class Airplane : public AirTransport
{
private:
    int SitsNum;
public:
    Airplane(string n, double s, int c, double ma, int sn) : AirTransport(n, s, c, ma), SitsNum(sn) {}

    void Output() const
    {
        AirTransport::Output();
        cout << "Number of sits: " << SitsNum << endl;
    }
};

class Helicopter : public AirTransport
{
private:
    int WindowsNum;

public:
    Helicopter(string n, double s, int c, double ma, int wn) : AirTransport(n, s, c, ma), WindowsNum(wn) {}

    void Output() const
    {
        AirTransport::Output();
        cout << "Number of windows: " << WindowsNum << endl;
    }
};

class Airship : public AirTransport
{
private:
    double volume;

public:
    Airship(string n, double s, int c, double ma, double vol) : AirTransport(n, s, c, ma), volume(vol) {}

    void Output() const
    {
        AirTransport::Output();
        cout << "Volume: " << volume << endl;
    }
};
