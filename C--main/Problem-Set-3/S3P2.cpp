#include <iostream>

using namespace std;

class Book{
    public:
    string title;
    string author;
    double price;

    void getData(string t, string a, double p){
        title =t;
        author = a;
        price = p;
    }

    void displayData(){
      cout<<"Title :"<<title<<endl;
      cout<<"Author:"<<author<<endl;
      cout<<"Price :"<<price<<endl;
    }

};

int main(){
    Book B1,B2,B3;
    string t;
    string a;
    double p;

    cout<<"Enter the title of the book\n";
    cin>>t;
    cout<<"Enter the author of the book\n";
    cin>>a;
    cout<<"Enter the price of the book\n";
    cin>>p;

    B1.getData(t,a,p);
    B2.getData("Wings Of Fire","Dr.Kalam",15000.0);
    B3.getData("Back","Dr.Stud",25720.0);

    B1.displayData();
    B2.displayData();
    B3.displayData();



    

}