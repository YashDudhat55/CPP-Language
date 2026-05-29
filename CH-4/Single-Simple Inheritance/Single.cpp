#include <iostream>
using namespace std;

// Parent Class
class ABC
{
protected:
    int a;

public:
    void setABC()
    {
        cout << "Enter a : ";
        cin >> this->a;
    }

    void getABC()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }
};

// Child Class
class PQR : public ABC
{
private:
    int p;

public:
    // a
    // setABC();
    // getABC();

    void setPQR()
    {
        cout << "Enter p : ";
        cin >> this->p;
    }

    void getPQR()
    {
        getABC();
        cout << endl
             << "p\t: " << this->p << endl;
        // cout << "A\t: " << a << endl;
    }

    int sum()
    {
        return a + this->p;
    }
};