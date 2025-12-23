#include <iostream>

using namespace std;

class Student{
    public:
    int rollno;
    string name;

    void getData(int r, string n){
        rollno = r;
        name = n;
    }

    void displayData(){
        cout<<"The name is :"<<name<<endl;
        cout<<"The roll no. is :"<<rollno<<endl;
    }

};

int main(){
    Student S1,S2;

    S1.getData(2,"Krishanav");
    S2.getData(14,"Billu");
    S1.displayData();
    S2.displayData();

}