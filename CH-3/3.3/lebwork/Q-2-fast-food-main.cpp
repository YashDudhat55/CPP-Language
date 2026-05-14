#include <iostream>
#include "Q-2-fast-food.cpp"

using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Cafes : ";
    cin >> n;

    FastFoodCafe cafe[n];

    cout << endl
         << "Cafe Details" << endl;

    for (int i = 0; i < n; i++)
    {
        cafe[i].display();
    }

    return 0;
}