#include <iostream>

using namespace std;

class FileHandler
{
public:
    FileHandler()
    {
        cout << "File Opened"<<endl;
    }
    ~FileHandler()
    {
        cout << "File Closed";
    }
};

int main()
{
    FileHandler();
}
