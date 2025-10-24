// Mini Project – Student Report Card
// Create a class Report with:
// Data members: name, rollNo, marks[5].
// Member functions:
// input() → to take details from user.
// display() → to show details.
// calculateGrade() → to calculate total, percentage, and grade (A, B, C, Fail).
// Write a program to create multiple objects of Report and display the report card for each student.

#include<iostream>
using namespace std;


class ReportCard
{
private:
  string name;
  int rollNo;
  int marks[5];
public:
 void input(){
  cout<<"Enter student name"<<endl;
  cin>>name;

  cout<<"Enter student roll no."<<endl;
  cin>>rollNo;

  cout<<"Enter marks of 5 subject"<<endl;
  for(int i=0;i<5;i++){
    cin>>marks[i];
  }
 }

 void display(){
  cout<<"The name of the student with rollNo "<<rollNo<<" is "<<name<<endl;
  cout<<"Marks in 5 subject are as follows: "; 
  for(int i=0;i<5;i++){
    cout<<" "<<marks[i]<<" ";
  }

  cout<<endl;
 }
  
 void CalculateGrade(){
  double total=0;
  double percentage;
  string grade;

  for(int i=0;i<5;i++){
    total+=marks[i];
  }

  percentage=((total/500)*100);

  if(percentage>=90 && percentage<=100){grade="S";}
  if(percentage>=80 && percentage<90 ){grade="A";}
  if(percentage>=70 && percentage<80 ){grade="B";}
  if(percentage>=40 && percentage <=70){grade="C";}
  if(percentage<40){grade="Fail";}
  cout<<"The total marks of student is "<<total<<" which makes the percentage "<<percentage<<"%"<< " and overall grade is " <<grade<<endl;
 }

};


int main(){
  ReportCard R1;
  R1.input();
  R1.display();
  R1.CalculateGrade();
  
  return 0;
}