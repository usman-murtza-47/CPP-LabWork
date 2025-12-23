#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;

    void setData(int r)
    {
        radius = r;
    }
    void display(){

        cout << "radius :" << radius << endl;
       
    }
};

void increaseRadius(Circle *c)
{
   c->radius = 5 + c->radius;
    
}

int main(){
    Circle C1;
    Circle *c = &C1;
    C1.setData(7);
    C1.display();
    increaseRadius(c);
    C1.display();
    

}