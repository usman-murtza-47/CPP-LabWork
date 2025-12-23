#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream myFile("bat.txt",ios::in);
    ofstream myFile2("cat.txt",ios::out);
    if (myFile.is_open() and myFile2.is_open()){
        string line;
        while(getline(myFile,line)){
            myFile2<<line + "\n";
        }
        myFile.close();
        myFile2.close();
        cout<<"Operation successfull !";
    }
    else{
        cout<<"File doesn't exist."<<endl;
    }
}