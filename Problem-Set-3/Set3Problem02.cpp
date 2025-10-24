//Multiple Objects
// Create a class Book with data members title, author, and price. Write a program to create three objects of Book, initialize them with user input, and display their details.

#include<iostream>
using namespace std;

class Book{
  private:
  string title;
  string author;
  double price;
  public:

  // User input
  void userInput(){
    cout<<"Enter the title of your book"<<endl;
     cin>>title;
    cout<<"Enter the author of your book"<<endl;
     cin>>author;
    cout<<"Enter the price of your book"<<endl;
     cin>>price;       
 }

//  Displaying details
void displayDetails(){
  cout<<"The title of the book written by "<<author<<" is "<<title<<" and its price is "<<price<<endl;
}
};

int main(){
  
  Book B1,B2,B3;
  B1.userInput();
  cout<<"================"<<endl;
  B2.userInput();
    cout<<"================"<<endl;
  B3.userInput();
    cout<<"================"<<endl;

    B1.displayDetails();
    B2.displayDetails();
    B3.displayDetails();
  return 0;
}