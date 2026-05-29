#include <iostream>
#include "Single.cpp"
using namespace std;

int main()
{
    PQR p;

    p.setABC();
    p.setPQR();

    p.getPQR();

    // int ans = p.sum();

    cout << endl
         << "Sum\t: " << p.sum() << endl;
}