#include <iostream>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int comp_id, string comp_name, int comp_staff_quantity, double comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds, string comp_ceo)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        this->comp_ceo = comp_ceo;
    }

    void display()
    {
        cout << endl
             << "Diamond Company Details" << endl;

        cout << "Company ID : " << comp_id << endl;
        cout << "Company Name : " << comp_name << endl;
        cout << "Staff Quantity : " << comp_staff_quantity << endl;
        cout << "Revenue : " << comp_revenue << endl;
        cout << "Imported Raw Diamonds : " << comp_import_raw_diamonds << endl;
        cout << "Export Diamonds : " << comp_export_diamonds << endl;
        cout << "CEO Name : " << comp_ceo << endl;
    }
};

void companyData()
{
    int n;

    cout << "Enter Number of Companies : ";
    cin >> n;

    DiamondCompany *company[n];

    for (int i = 0; i < n; i++)
    {
        int id, staff, import_raw, export_diamond;
        double revenue;

        string name, ceo;

        cout << endl
             << endl;

        cout << "Enter Details of Company " << i + 1 << endl;

        cout << "Enter Company ID : ";
        cin >> id;

        cin.ignore();

        cout << "Enter Company Name : ";
        cin >> name;

        cout << "Enter Staff Quantity : ";
        cin >> staff;

        cout << "Enter Revenue : ";
        cin >> revenue;

        cout << "Enter Imported Raw Diamonds : ";
        cin >> import_raw;

        cout << "Enter Export Diamonds : ";
        cin >> export_diamond;

        cin.ignore();

        cout << "Enter CEO Name : ";
        cin >> ceo;

        company[i] = new DiamondCompany(
            id,
            name,
            staff,
            revenue,
            import_raw,
            export_diamond,
            ceo);
    }

    cout << endl
         << "Company Information" << endl;

    for (int i = 0; i < n; i++)
    {
        company[i]->display();
    }
}