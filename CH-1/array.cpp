#include<iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter number of elements  : ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }


    return 0;
}