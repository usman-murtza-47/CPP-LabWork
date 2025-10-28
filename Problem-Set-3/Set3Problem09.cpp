// Returning Object from Function
// Create a class Time with data members hours and minutes.
// Write a function addTime(Time t) that adds two time objects and returns a new object.
// Ensure minutes are properly converted into hours if they exceed 60.

#include<iostream>
using namespace std;
class Time{
  private: 
  int hours;
  int minutes;
  public:
  Time(int h=0,int m=0):hours{h},minutes{m}{}
  Time addTime(Time t){
    Time result;

    result.minutes=minutes+t.minutes;
    result.hours=hours+t.hours+(result.minutes/60);
    result.minutes=result.minutes%60;

    return result;

  }

  void display(){
    cout<<"The time is "<<hours<<" hours and "<<minutes<<" minutes";
  }
};

int main(){
  Time t1(2,40);
  Time t2(4,55);
  Time t3 =t1.addTime(t2);
  t3.display();
  
  return 0;
}
