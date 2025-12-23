#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    void setData(int a, int b)
    {
        length = a;
        breadth = b;

        cout << "length before call " << length << endl;
        cout << "breadth before call " << breadth << endl;
    }
};

void scale(Rectangle &p)
{
    p.length = 2 * p.length;
    p.breadth = 2 * p.breadth;
    cout << "length after call " << p.length << endl;
    cout << "breadth after call " << p.breadth << endl;
}

int main(){
    Rectangle r;
    r.setData(12,7);
    scale(r);
}