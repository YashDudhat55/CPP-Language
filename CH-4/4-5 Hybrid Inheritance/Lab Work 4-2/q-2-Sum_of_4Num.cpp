#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void inputA()
    {
        cout << "Enter First Number\t: ";
        cin >> this->a;
    }
};

class B : virtual public A
{
protected:
    int b;

public:
    void inputB()
    {
        cout << "Enter Second Number\t: ";
        cin >> this->b;
    }
};

class C : virtual public A
{
protected:
    int c;

public:
    void inputC()
    {
        cout << "Enter Third Number\t: ";
        cin >> this->c;
    }
};

class D : public B, public C
{
    int d;

public:
    void inputD()
    {
        cout << "Enter Fourth Number\t: ";
        cin >> this->d;
    }

    void sum()
    {
        int total = a + b + c + d;

        cout << endl
             << "Sum of All Numbers \t= " << total << endl;
    }
};