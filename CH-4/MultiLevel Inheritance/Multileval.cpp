#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void setA()
    {
        cout << "Enter first number : ";
        cin >> this->a;
    }

protected:
    void getA()
    {
        cout << "A\t: " << this->a << endl;
    }
};

class B : public A
{
private:
    int b;

public:
    void setB()
    {
        cout << "Enter second number : ";
        cin >> this->b;
    }

protected:
    void getB()
    {
        cout << "B\t: " << this->b << endl;
    }
};

class C : public B
{
public:
    void outPut()
    {
        cout << "-- OUTPUT --" << endl;
        getA();
        getB();
    }
};