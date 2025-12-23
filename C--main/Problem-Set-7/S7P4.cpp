#include <iostream>
using namespace std;

template <class T>

 void scaleVector(T arr[], int n , T factor){
    for(int i = 0; i<n ; i++){
        arr[i] = arr[i] * factor;
    }
 }
 
int main(){
    double arr1[4]={1.5,2.6,3.6,4.5};
    int n=4;
    double factor = 2.5;
    scaleVector(arr1, n, factor);
    for(int i = 0; i<n ; i++){
        cout<<arr1[i]<<" ";
    }


    
}