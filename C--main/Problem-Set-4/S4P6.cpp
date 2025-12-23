#include <iostream>
using namespace std;

class Box
{
    public:
    int length;
    int width;
    int height;

    Box(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }

    void compare(Box B){
        if ((length*height*width) < (B.height*B.length*B.width)){
            cout<<"2nd box has greater volume i.e "<<B.height*B.length*B.width<<endl;
        }
        else if ((length*height*width) > (B.height*B.length*B.width)){
            cout<<"1st box has greater volume i.e "<<height*length*width<<endl;
        }
        else{
            cout<<"BOTH HAVE SAME VOLUME"<<endl;
        }
    }
};

int main(){
    Box B1(60,5,8);
    Box B2(6,5,10);
    B1.compare(B2);
}