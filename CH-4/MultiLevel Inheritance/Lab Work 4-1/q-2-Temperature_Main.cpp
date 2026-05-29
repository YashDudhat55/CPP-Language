#include <iostream>
#include "q-2-Temperature.cpp"

int main()
{
    R temp;

    temp.setCelsius();
    temp.toFehrenheit();
    temp.toKelvin();

    return 0;
}