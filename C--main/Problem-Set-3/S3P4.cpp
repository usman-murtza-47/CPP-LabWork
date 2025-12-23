#include <iostream>

using namespace std;

class Employee
{
public:
    int id;
    float salary;
    void displayData()
    {
        cout << "THE ID IS :" << id << endl;
        cout << "THE SALARY IS :" << salary << endl;
    }

    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }
};

int main()
{
    Employee E1(3002, 350000.00);
    Employee E2(3014, 550000.00);

    E1.displayData();
    E2.displayData();
}