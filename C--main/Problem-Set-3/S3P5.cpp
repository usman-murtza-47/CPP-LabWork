#include <iostream>
using namespace std;

class Circle{
    public:

    int radius;
    
    Circle(){
        radius = 1;
    }
    Circle(int r){
        radius = r;
    }
    void Area(){
        int area;
        area = 3.14*radius*radius;
        cout<<"Area of circle is :"<<area<<endl;
    }
};

int main(){
    Circle C1;
    cout<<"Radius is :"<<C1.radius;

    Circle C2(5);
    C2.Area(); 

}
