#include <iostream>
using namespace std;

class FastFoodCafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe()
    {
        cout << "\nEnter Cafe ID : ";
        cin >> cafe_id;

        cout << "Enter Cafe Name : ";
        cin >> cafe_name;

        cout << "Enter Cafe Type : ";
        cin >> cafe_type;

        cout << "Enter Cafe Rating : ";
        cin >> cafe_rating;

        cout << "Enter Cafe Location : ";
        cin >> cafe_location;

        cout << "Enter Establish Year : ";
        cin >> cafe_establish_year;

        cout << "Enter Staff Quantity : ";
        cin >> cafe_staff_quantity;
    }

    void display()
    {
        cout << "\n----- Fast Food Cafe Information -----" << endl;

        cout << "Cafe ID : " << cafe_id << endl;
        cout << "Cafe Name : " << cafe_name << endl;
        cout << "Cafe Type : " << cafe_type << endl;
        cout << "Cafe Rating : " << cafe_rating << endl;
        cout << "Cafe Location : " << cafe_location << endl;
        cout << "Establish Year : " << cafe_establish_year << endl;
        cout << "Staff Quantity : " << cafe_staff_quantity << endl;
    }
};