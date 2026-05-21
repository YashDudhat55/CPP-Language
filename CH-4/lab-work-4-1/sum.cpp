#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};

class Y : public X
{
public:
    void setData()
    {
        cout << endl
             << "Enter any First Numbers : ";
        cin >> a;

        cout << "Enter any Second Numbers : ";
        cin >> b;

        cout << "Enter any Third Numbers : ";
        cin >> c;
    }

    void getData()
    {
        int sum;

        sum = (a * a * a) + (b * b * b) + (c * c * c);

        cout << endl
             << "Sum\t: " << sum << endl;
    }
};