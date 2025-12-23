#include <iostream>

using namespace std;

class Report
{
public:
    int rollno;
    string name;
    int marks[5];

    void input(int r, string n, int m[5])
    {
        rollno = r;
        name = n;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }

    void display()
    {
        cout << "The name is :" << name << endl;
        cout << "The roll no. is :" << rollno << endl;
        cout << "Marks are :";
        for (int i = 0; i < 5; i++)
        {
            cout <<"\t"<< marks[i];
        }
    }
    void CalculateGrade(int m[5])
    {
        float count = 0;
        for (int i = 0; i < 5; i++)
        {
            count += m[i];
        }
        float per;
        per=(count/5);
        cout<<"\nTotal marks :"<<count<<endl;
        cout<<"Percentage :"<<per<<endl;

        if (per>90 && per<=100){
            cout<<"Grade A";
        }
        if (per>75 && per<=90){
            cout<<"Grade B";
        }
        if (per>60 && per<=75){
            cout<<"Grade C";
        }
        if (per>33 && per<=60){
            cout<<"Grade D";
        }
        if (per>0 && per<=33){
            cout<<"FAIL";
        }
    }
};

int main()
{   Report R1;
    int arr[5]={91,92,95,95,90};
    R1.input(2,"Krishanav",arr);
    R1.display();
    R1.CalculateGrade(arr);
    
}
