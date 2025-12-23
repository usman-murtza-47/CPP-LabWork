#include <iostream>
using namespace std;

class Account
{
    double balance;

public:
    Account(double b)
    {
        balance = b;
    }

    void display()
    {
        cout<<"THE BALANCE IS :"<<balance<<endl;
    }

    void transfer(Account *acc, double b)
    {
        if (b < balance)
        {
            acc->balance = acc->balance + b;
            balance = balance - b;
        }

        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }
};

int main()
{
    Account A1(5000.0);
    Account A2(10000.0);
    A1.display();
    A2.display();
    Account *acc = &A2;
    A1.transfer(acc,40000.0);
    A1.display();
    A2.display();
}