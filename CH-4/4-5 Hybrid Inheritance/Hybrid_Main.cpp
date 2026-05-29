#include <iostream>
#include "Hybrid.cpp"

int main()
{
    D d1;

    d1.C::setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.C::getA();
    d1.getB();
    d1.getC();
    d1.getD();

    return 0;
}