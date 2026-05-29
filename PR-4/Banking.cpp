#include <iostream>
#include <string.h>
using namespace std;

// Base Class
class BankAccount
{
protected:
    int accNo;
    char name[50];
    double balance;

public:
    void createAccount()
    {
        cout << endl
             << "Enter Account Number : ";
        cin >> accNo;

        fflush(stdin);

        cout << "Enter Account Holder Name : ";
        gets(name);

        cout << "Enter Opening Balance : ";
        cin >> balance;
    }

    void deposit()
    {
        double amount;

        cout << endl
             << "Enter Deposit Amount : ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully..." << endl;
    }

    virtual void withdraw()
    {
        double amount;

        cout << endl
             << "Enter Withdraw Amount : ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;

            cout << "Withdraw Successful..." << endl;
        }
        else
        {
            cout << "Insufficient Balance..." << endl;
        }
    }

    virtual void calculateInterest()
    {
        cout << "No Interest Available..." << endl;
    }

    virtual void display()
    {
        cout << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

// Savings Account
class Savings : public BankAccount
{
private:
    double rate;

public:
    void createSavings()
    {
        createAccount();

        cout << "Enter Interest Rate : ";
        cin >> rate;
    }

    void calculateInterest()
    {
        double interest;

        interest = (balance * rate) / 100;

        cout << endl
             << "Interest Amount : " << interest << endl;

        cout << "Total Balance   : "
             << balance + interest << endl;
    }
};

// Current Account
class Current : public BankAccount
{
private:
    double limit;

public:
    void createCurrent()
    {
        createAccount();

        cout << "Enter Overdraft Limit : ";
        cin >> limit;
    }

    void withdraw()
    {
        double amount;

        cout << endl
             << "Enter Withdraw Amount : ";
        cin >> amount;

        if (amount <= balance + limit)
        {
            balance -= amount;

            cout << "Withdraw Successful..." << endl;
        }
        else
        {
            cout << "Limit Exceeded..." << endl;
        }
    }
};

// Fixed Deposit Account
class FixedDeposit : public BankAccount
{
private:
    int months;
    double fdRate;

public:
    void createFD()
    {
        createAccount();

        cout << "Enter FD Period (Months) : ";
        cin >> months;

        cout << "Enter FD Interest Rate : ";
        cin >> fdRate;
    }

    void calculateInterest()
    {
        double fdInterest;

        fdInterest = (balance * fdRate * months) / (100 * 12);

        cout << endl
             << "FD Interest : " << fdInterest << endl;

        cout << "Maturity Amount : "
             << balance + fdInterest << endl;
    }
};

int main()
{
    Savings s1;
    Current c1;
    FixedDeposit f1;

    int choice;

    do
    {
        cout << endl;
        cout << "========== BANK MENU ==========" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Current Account" << endl;
        cout << "3. Fixed Deposit Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            s1.createSavings();

            s1.deposit();

            s1.withdraw();

            s1.display();

            s1.calculateInterest();

            break;

        case 2:

            c1.createCurrent();

            c1.deposit();

            c1.withdraw();

            c1.display();

            break;

        case 3:

            f1.createFD();

            f1.deposit();

            f1.display();

            f1.calculateInterest();

            break;

        case 4:

            cout << endl
                 << "Thank You..." << endl;

            break;

        default:

            cout << "Invalid Choice..." << endl;
        }

    } while (choice != 4);

    return 0;
}