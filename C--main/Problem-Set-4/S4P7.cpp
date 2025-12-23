#include <iostream>
using namespace std;

class Time
{
public:
    int hours;
    int mins;

    Time(int h, int m)
    {
        hours = h;
        mins = m;
    }

    void add(Time &T)
    {

        if ((mins + T.mins) >= 60)
        {
            mins = (mins + T.mins) % 60;
            hours += 1;
        }
        else if ((mins + T.mins) < 60)
        {
            mins = (mins + T.mins);
        }
        if ((hours + T.hours) < 24)
       {
           hours = hours + T.hours;
       }
        else if ( (hours + T.hours) >= 24)
        {
            hours = (hours + T.hours) % 24;
        }
        cout << "Hours :" << hours << endl;
        cout << "Minutes :" << mins << endl;
    }
};

int main()
{
    Time T1(15, 45);
    Time T2(13, 35);
    T1.add(T2);
}