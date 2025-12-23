#include <iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Base constructor called."<<endl;
    }
    ~base(){
        cout<<"Base destructor called."<<endl;
    }
};
class derived : public base{
    public:
    derived(){
        cout<<"derived constructor called."<<endl;
    }
    ~derived(){
        cout<<"derived destructor called."<<endl;
    }
};
int main(){
    
    derived d1;
    
}

