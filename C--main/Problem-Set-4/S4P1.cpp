#include <iostream>
using namespace std;

class Point{
    public:
    int x, y;

    void setData(int a, int b){
        x=a;
        y=b;
        
    }
};

void display(Point p){
    cout<<"THE COORDINATES ARE :"<<p.x<<" and "<<p.y;

}
int main(){
    Point obj;
    obj.setData(4,5);
    display(obj);

}