#include <iostream>
using namespace std;
 
class vector2D
{
    public:
    int x;
    int y;

    vector2D(){}

    vector2D(int a , int b){
        x = a;
        y = b;
    }

    vector2D operator +(vector2D obj){
        vector2D temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }

};
class vector3D: public vector2D
{
    public:
    int z;

    vector3D(){}

    vector3D(int a , int b , int c){
        vector2D(a,b);
        z = c;
    }

    vector3D operator +(vector3D obj){
        vector3D temp;
        temp.x = this->x + obj.x;
        temp.y = this->y + obj.y;
        temp.z = z + obj.z;
        return temp;
    }

};

int main(){
    // vector2D obj1(5,6);
    // vector2D obj2(3,4);
    // vector2D obj3;
    // obj3 = obj1 + obj2;
    // cout<<obj3.x<<" "<<obj3.y;;
    vector3D obj4(5,6,7);
    vector3D obj5(3,4,5);
    vector3D obj6;
    obj6 = obj4 + obj5;
    cout<<obj6.x<<" "<<obj6.y<<" "<<obj6.z;

}