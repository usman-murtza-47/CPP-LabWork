#include <iostream>
using namespace std;
class Car{
    string brand;
    int price;

    public:
    Car(){
        brand = "Supra";
        price = 50000000;
    }

    void displayData(){
        cout<<"THE BRAND IS :"<<brand<<endl;
        cout<<"THE PRICE IS :"<<price<<endl;
    }
};

int main(){
    Car C1;
    Car C2=C1;
    C1.displayData();
    C2.displayData();
}