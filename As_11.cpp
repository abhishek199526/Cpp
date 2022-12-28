/*
Create a class time with hours and minutes as its data members .Write a C++ program which has a
member function to overload binary operator + to add two times .Also  overload relational operator
 > to compare 2 times .It should also overload << (output) and >> (input)  operator. 
 */

#include <iostream>
#include <conio.h>
using namespace std;
class Time
{

public:
    int hours, minutes;
    Time operator+(Time);
    friend int operator>(Time, Time);
    friend istream &operator>>(istream &, Time &);
    friend ostream &operator<<(ostream &, Time &);
};

Time Time ::operator+(Time t1) // Overloading + Operator
{
    Time temp;
    temp.hours = hours + t1.hours;
    temp.minutes = minutes + t1.minutes;
    if (temp.minutes >= 60)
    {
        temp.minutes -= 60;
        temp.hours++;
    }

    return temp;
}
int operator>(Time t1, Time t2) // Overloading  > (relational) Operator
{
    int flag;

    if (t1.hours > t2.hours)
    {
        if (t1.minutes > t2.minutes)
        {
            flag = 1;
        }
    }
    else
    {
        flag = 0;
    }
    return flag;
}

istream &operator>>(istream &input, Time &t1) // Overloading >>(insertion ) Operator

{
    cout << "Enter Time In (hours:minutes) Format " << endl;
    input >> t1.hours >> t1.minutes;

    return input;
}
ostream &operator<<(ostream &output, Time &t1) // Overloading <<(extracttion ) Operator
{
    cout << " \nTime Is - ";
    if (t1.minutes >= 60)
    {
        t1.minutes -= 60;
        t1.hours++;
    }

    output << t1.hours << " : " << t1.minutes << endl;
    return output;
}
int main()
{
    Time t1, t2;
    cin >> t1 >> t2;   //  Using  >>(insertion ) Operator
    Time t3 = t1 + t2; //  Using  + Operator

    cout << t3 << endl; //  Using  <<(extraction ) Operator

    if (t1 > t2) // Using  > (relational) Operator
    {
        cout << "Time " << t1.hours << " : " << t1.minutes << " Is Greater Than " << t2.hours << " : " << t2.minutes;
    }
    else
    {
        cout << "Time " << t2.hours << " : " << t2.minutes << " Is Greater Than " << t1.hours << " : " << t1.minutes;
    }

    return 0;
}

/*=
            Output
Enter Time In (hours:minutes) Format 
5
55
Enter Time In (hours:minutes) Format 
4
45
 
Time Is - 10 : 40

Time 5 : 55 Is Greater Than 4 : 45


*/
 