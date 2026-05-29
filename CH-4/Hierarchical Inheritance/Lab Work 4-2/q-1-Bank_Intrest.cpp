#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;

public:
    void setRate(float rate)
    {
        this->rate = rate;
    }

    void getROI()
    {
        cout << endl
             << "Rate of Intrest \t: " << this->rate << "%" << endl;
    }
};

class SBI : public RBI
{
public:
    void input()
    {
        cout << "Enter SBI Intrest Rate\t: ";
        cin >> rate;
    }

    void display()
    {
        cout << endl
             << "SBI Bank" << endl;
        getROI();
    }
};

class BOB : public RBI
{
public:
    void input()
    {
        cout << "Enter BOB Intrest Rate\t: ";
        cin >> rate;
    }

    void display()
    {
        cout << endl
             << "BOB Bank" << endl;
        getROI();
    }
};

class ICICI : public RBI
{
public:
    void input()
    {
        cout << "Enter ICICI Intrest Rate : ";
        cin >> rate;
    }

    void display()
    {
        cout << endl
             << "ICICI Bank" << endl;
        getROI();
    }
};