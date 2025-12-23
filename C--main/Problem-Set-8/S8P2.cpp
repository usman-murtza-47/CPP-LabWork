#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int w = 0, chr = 0, l = 0;
    ifstream myFile("bat.txt", ios::in);
    if (myFile.is_open())
    {
        string line;
        char ch;
        string word;
        while (myFile.get(ch))
        {
            chr += 1;
        }
        myFile.clear();
        myFile.seekg(0, ios::beg);
        while (getline(myFile, line))
        {
            l = l + 1;
        }
        myFile.clear();
        myFile.seekg(0, ios::beg);
        while (myFile >> word)
        {
            w += 1;
        }
        myFile.close();

        cout << "In the given file :" << endl;
        cout << "The total number of characters are :" << chr << endl;
        cout << "The total number of words are :" << w << endl;
        cout << "The total number of lines are :" << l << endl;
    }
}