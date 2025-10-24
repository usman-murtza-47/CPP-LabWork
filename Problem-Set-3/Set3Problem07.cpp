// Copy Constructor
// Create a class Car with data members brand and price.
// Define a copy constructor to initialize one object from another.
// Demonstrate copy constructor in main().

#include<iostream>
using namespace std;

class Car{
  private:
   string brand;
   double price;
  public:
  Car(string b,double p):brand{b},price{p}{}
  
  Car(const Car &source){
    cout<<"Copy constructor called"<<endl;
    brand=source.brand;
    price=source.price;
  }

   void display(){
     cout<<"The car is of brand "<<brand<<" and its price is "<<price<<endl;
  }
};

int main(){
  
  Car C1("Toyota",20000);
  cout<<"DISLAYING C1"<<endl;
  C1.display();

  Car C2=C1;
    cout<<"DISLAYING C2"<<endl;
    C2.display();

  return 0;
}