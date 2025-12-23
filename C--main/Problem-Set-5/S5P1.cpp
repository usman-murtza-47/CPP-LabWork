#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    int marks[5];
    int total = 0;

public:
    student() {}
    void setData()
    {
        cout << "Enter the roll no :" << endl;
        cin >> rollno;
        cout << "Enter the name :" << endl;
        cin >> name;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << endl;
            cin >> marks[i];
        }

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
    }
    void display()
    {
        cout << "Roll No is: " << rollno << endl;
        cout << "Name is: " << name << endl;
        cout << "Total marks are: " << total << endl;
    }
    int totalMarks()
    {
        return total;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students :" << endl;
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].setData();
    }
    int max;
    max = arr[0].totalMarks();
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i].totalMarks())
        {
            max = arr[i].totalMarks();
            a = i;
        }
    }
    cout << "Maximum marks are :" << max << endl;
    cout << "student getting highest marks : " << endl;
    arr[a].display();
}
