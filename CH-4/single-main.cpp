#include <iostream>
#include "single.cpp"
using namespace std;

int main()
{
    PQR p;

    p.setABC();
    p.setPQR();

    p.getPQR();

    // int ans = p.sum();

    cout << "Sum\t: " << p.sum() << endl;
}