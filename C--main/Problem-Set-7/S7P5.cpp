#include <iostream>
using namespace std;

template <class T>

class stringBox{
    T string;
    public:

    void set(T a){
        string = a;
       
    }

    void get(){
        cout<<string<<endl;
        }

};
 
int main(){
    stringBox <string> obj1;
    obj1.set("Mafia");
    obj1.get();
}