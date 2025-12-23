#include <iostream>
 using namespace std;
class Rectangle{
    int length;
    int width;
    public:

     Rectangle(int l, int w){
        length = l;
        width = w;
     } 

    int Area();

    void displayArea(){
        cout<<"area of rectangle :"<<Area()<<endl;
    }
};

int Rectangle :: Area(){
    return length * width ;
}

int main(){
    Rectangle R1(5,6);
    R1.Area();
    R1.displayArea();

    Rectangle *ptr = new Rectangle(6,7);
    ptr->Area();
    ptr->displayArea();
}



