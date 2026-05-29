#include <iostream>
using namespace std;

class Father
{
protected:
    string fatherMessage = "Study pe focus kar to aage badhege";
};

class Mother
{
protected:
    string motherMessage = "Rat ko der tak bahar mat ghumna..";
};

class Child : public Father, public Mother
{
public:
    void suggestion()
    {
        cout << fatherMessage << endl
             << motherMessage;
    }
};