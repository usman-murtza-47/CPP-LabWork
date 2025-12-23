#include <iostream>
using namespace std;

class Matrix
{
    int arr[2][2];

public:
    Matrix()
    {}
    Matrix(int a, int b, int c, int d)
    {
        arr[0][0] = a;
        arr[0][1] = b;
        arr[1][0] = c;
        arr[1][1] = d;
    }
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            cout << endl;
            for (int j = 0; j < 2; j++)
            {

                cout << arr[i][j] << "\t";
            }
        }
    }
    Matrix Add(Matrix &m)
    {
        Matrix m1;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                m1.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return m1;
    }
};
int main()
{
    Matrix M1(1, 2, 3, 4);
    M1.display();
    cout<<endl;
    Matrix M2(5,6,7,8);
    M2.display();
    cout<<endl;
    Matrix m3;
    m3 = M1.Add(M2);
    m3.display();
}