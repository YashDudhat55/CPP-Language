#include <iostream>
using namespace std;

class RBI
{
protected:
    double rate = 5.2;
};

class SBI : public RBI
{
private:
    double amount;

public:
    void setSBIAmount()
    {
        cout << "Enter SBI bank loan amount : ";
        cin >> this->amount;
    }

    void getSBIFinalLoanAmount()
    {
        double interest = (amount * rate) / 100;

        amount += interest;

        cout << endl
             << "SBI Final Amount : " << amount << endl
             << endl;
    }
};

class ICICI : public RBI
{
private:
    double amount;

public:
    void setICICIAmount()
    {
        cout << "Enter ICICI bank loan amount : ";
        cin >> this->amount;
    }

    void getICICIFinalLoanAmount()
    {
        double interest = (amount * rate) / 100;

        amount += interest;

        cout << endl
             << "ICICI Final Amount : " << amount << endl
             << endl;
    }
};

class Kotak : public RBI
{
private:
    double amount;

public:
    void setKotakAmount()
    {
        cout << "Enter Kotak bank loan amount : ";
        cin >> this->amount;
    }

    void getKotakFinalLoanAmount()
    {
        double interest = (amount * rate) / 100;

        amount += interest;

        cout << endl
             << "Kotak Final Amount : " << amount << endl
             << endl;
    }
};