/*
Write a date class with data members dd, mm ,yy. Write a constructor and overload ++  operator, <<
operator and >> operator 
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Date
{
private:
    int dd, mm, yy;

public:
    Date(){};            // Default Constructer
    Date(int, int, int); // Parameterised Constructer

    Date &operator++();

    friend istream &operator>>(istream &, Date &);
    friend ostream &operator<<(ostream &, Date &);

    void PrintDate();
};

Date ::Date(int day, int month, int year)
{

    dd = day;
    mm = month;
    yy = year;
}
Date &Date ::operator++() // Overloding ++ Operator
{
    dd++;
    return *this;
}

istream &operator>>(istream &input, Date &d1) // Overloding >>(Insertion) Operator
{

    input >> d1.dd >> d1.mm >> d1.yy;
    return input;
}
ostream &operator<<(ostream &output, Date &d1) // Overloding <<(Extraction) Operator
{

    output << "The Date Is " << d1.dd << "-" << d1.mm << "-" << d1.yy << endl;
    return output;
}

void Date ::PrintDate()
{

    cout << "The Date Is " << dd << "-" << mm << "-" << yy << endl;
}

int main()
{
    Date d1(12, 06, 2004);
    ++d1; // Using ++ Operator
    d1.PrintDate();
    cout << "Enter Date In (dd - mm - yy ) Format" << endl;
    cin >> d1;  // Using >>(Insertion) Operator
    cout << d1; // Using <<(Extraction) Operator

    return 0;
}
/*
            Output
        The Date Is 13-6-2004
        Enter Date In (dd - mm - yy ) Format
        18
        12
        2003
        The Date Is 18-12-2003

*/
// #include<iostream>
// using namespace std;
// class Date
// {
//       int day;
//       int month;
//       int year;
//       public:
//              Date(int d,int m,int y)
//              {
//                    day=d;
//                    month=m;
//                    year=y;
//              }

//              friend Date operator -(Date &,int);
//              friend Date operator +(Date &,int);
//              void display()
//              {
//                   cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
//              }
// };
// Date operator-(Date &x,int y)
// {
//      return Date(x.day-y, x.month, x.year);
// }
// Date operator+(Date &x,int y)
// {
//      return Date(x.day+y, x.month, x.year);
// }
// int main()
// {
//     int dd,mm,yy;
//     cout<<"Enter Day:";
//     cin>>dd;
//     cout<<"Enter Month:";
//     cin>>mm;
//     cout<<"Enter Year:";
//     cin>>yy;

//     Date d1(dd,mm,yy);
//     Date d2=d1-1;
//     d2.display();
//     Date d3=d1+1;
//     d3.display();
//     return 0;
// }
