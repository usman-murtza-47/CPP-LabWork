#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float basicSalary, hra, da, netSalary;

    Employee() {
        id = 0;
        name = "NotGiven";
        basicSalary = hra = da = netSalary = 0;
    }

    Employee(int id, string name, float basicSalary, float hra, float da) {
        this->id = id;
        this->name = name;
        this->basicSalary = basicSalary;
        this->hra = hra;
        this->da = da;
        calculateNetSalary();
    }

    void input() {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        calculateNetSalary();
    }

    void calculateNetSalary() {
        netSalary = basicSalary + hra + da;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nNet Salary: " << netSalary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\n Enter details of Employee " << i + 1 << " \n";
        emp[i].input();
    }

    cout << "\n\nEmployee Details \n";
    for (int i = 0; i < n; i++) {
        emp[i].display();
    }

    cout << "\n\nEmployees with Net Salary > ₹50,000\n";
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (emp[i].netSalary > 50000) {
            emp[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo employee earns above ₹50,000.\n";
    }

    return 0;
}