#include <iostream>
using namespace std;

class Train
{
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    Train()
    {
        trainCount++;
    }

    ~Train()
    {
        trainCount--;
    }

    void inputTrainDetails()
    {
        cout << "Enter Train Number : ";
        cin >> this->trainNumber;
        
        cout << "Enter Train Name : ";
        cin >> this->trainName;

        cout << "Enter Source : ";
        cin >> this->source;

        cout << "Enter Destination : ";
        cin >> this->destination;

        cout << "Enter Train Time : ";
        cin >> this->trainTime;
    }

    void displayTrainDetails()
    {
        cout << endl
             << "Train Details : " << endl;

        cout << "Train Number : " << this->trainNumber << endl;
        cout << "Train Name   : " << this->trainName << endl;
        cout << "Source       : " << this->source << endl;
        cout << "Destination  : " << this->destination << endl;
        cout << "Train Time   : " << this->trainTime << endl;
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;