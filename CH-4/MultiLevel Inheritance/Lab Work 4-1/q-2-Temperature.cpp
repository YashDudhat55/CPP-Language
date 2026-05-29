#include <iostream>
using namespace std;

class P
{
protected:
    float C;

public:
    void setCelsius()
    {
        cout << endl
             << "Enter Celsius \t: ";
        cin >> this->C;
    }
};

class Q : public P
{
protected:
    float F;

public:
    void toFehrenheit()
    {
        F = C * 1.8 + 32;

        cout << endl
             << "Fehrenheit \t: " << F << endl;
    }
};

class R : public Q
{
protected:
    float K;

public:
    void toKelvin()
    {
        K = (F - 32) * 5 / 9 + 273.15;

        cout << endl
             << "Kelvin \t\t: " << K << endl
             << endl;
    }
};