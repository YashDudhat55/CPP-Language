#include <iostream>
#include "RBI.cpp"

int main()
{
    SBI s1;
    ICICI i1;
    Kotak k1;

    s1.setSBIAmount();
    s1.getSBIFinalLoanAmount();

    i1.setICICIAmount();
    i1.getICICIFinalLoanAmount();

    k1.setKotakAmount();
    k1.getKotakFinalLoanAmount();

    return 0;
}