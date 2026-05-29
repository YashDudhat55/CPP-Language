#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void setA()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getA()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }
};
class B : public A
{
private:
    int b;

public:
    // setA()
    // getA()
    void setB()
    {
        cout << "Enter b : ";
        cin >> this->b;
    }

    void getB()
    {
        cout << endl
             << "B\t: " << this->b << endl;
    }

    void greeting()
    {
        cout << "Hii";
    }
};
class C : public A
{
private:
    int c;

public:
    // setA()
    // getA()
    void setC()
    {
        cout << "Enter c : ";
        cin >> this->c;
    }

    void getC()
    {
        cout << endl
             << "C\t: " << this->c << endl;
    }

    void greeting()
    {
        cout << "Hello";
    }
};
class D : public B, public C
{
private:
    int d;

public:
    void setD()
    {
        cout << "Enter d : ";
        cin >> this->d;
    }

    void getD()
    {
        cout << endl
             << "D\t: " << this->d << endl;
    }
};