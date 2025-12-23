#include <iostream>
using  namespace std;
 
template <class T>

T sumArray(T arr[], int n){
    T sum = 0;
    for (int i = 0; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){


    int n1 = 4;
    int arr1[4] = {1,2,3,4};
    
    float n2 = 4;
    float arr2[4]= {1.2,3.5,6.5,7.8};
    

    cout <<"The sum is ;"<<sumArray(arr1,n1)<<endl;
    cout<<"The sum is :"<<sumArray(arr2,n2);
}