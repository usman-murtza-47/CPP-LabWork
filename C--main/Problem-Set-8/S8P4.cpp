#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream myFile("bat.txt", ios::app);
    if (myFile.is_open())
    {
        string line;
        cout << "Enter your lines one by one";
        while (myFile.is_open())
        {
            if (line == "Stop")
            {
                myFile.close();
                cout << "Data has been appended successfully !" << endl;
            }
            else
            {
                cin >> line;
                myFile << line + "\t";
            }
        }
    }
    else
    {
        cout << "File doesn't exist." << endl;
    }
}