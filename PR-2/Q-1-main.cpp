#include <iostream>
#include "Q-1.cpp"
    
using namespace std;

int main()
{
    Train t[100];

    int total = 0;
    int choice;
    int number;
    int found;

    do
    {
        cout << endl
             << "--- Railway Reservation System Menu ---" << endl;

        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl
             << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl
             << endl;

        switch (choice)
        {
        case 1:

            t[total].inputTrainDetails();
            total++;

            break;

        case 2:

            if (total == 0)
            {
                cout << endl
                     << "No train records found!" << endl;
            }
            else
            {
                for (int i = 0; i < total; i++)
                {
                    t[i].displayTrainDetails();
                }
            }

            break;

        case 3:

            cout << "Enter Train Number to search: ";
            cin >> number;

            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (t[i].getTrainNumber() == number)
                {
                    t[i].displayTrainDetails();
                    found = 1;
                }
            }

            if (found == 0)
            {
                cout << "Train with number "
                     << number
                     << " not found!" << endl;
            }

            break;

        case 4:

            cout << "Exiting the system......" << endl;

            break;

        default:

            cout << "Invalid Choice...." << endl;
        }

    } while (choice != 4);

    return 0;
}