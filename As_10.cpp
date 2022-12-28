/*  Write a menu driven program for addition ,subtraction ,display result of two distances ( given in
meter and centimetre). 
i. Overload ‘+’ operator with member function
ii. Overload ‘–‘ operator using friend function
iii. Overload   << and >>   operator  */

#include <iostream>
#include <conio.h>
using namespace std;

class Distance
{
    int meter;
    float centimeter;

public:
    Distance(){};             // Default Constructer
    Distance(int m, float cm) // Parameterised Constructer
    {
        meter = m;
        centimeter = cm;
    }

    Distance operator+(Distance &);
    friend Distance operator-(Distance &, Distance &);
    friend istream &operator>>(istream &, Distance &);
    friend ostream &operator<<(ostream &, Distance &);
    void Display();
};

Distance Distance ::operator+(Distance &d1) // Overloding + Operator
{
    Distance temp;
    temp.meter = meter + d1.meter;
    temp.centimeter = centimeter + d1.centimeter;
    if (temp.centimeter >= 100)
    {
        temp.centimeter -= 100;
        temp.meter++;
    }
    return temp;
}
Distance operator-(Distance &d1, Distance &d2) // Overloding - Operator
{
    Distance temp;
    temp.meter = d1.meter - d2.meter;
    temp.centimeter = d1.centimeter - d2.centimeter;
    return temp;
}

istream &operator>>(istream &input, Distance &d1) // Overloding >>(insertion ) Operator
{
    cout << "Enter  Distance in (meter.centimeter ) Format  " << endl;
    input >> d1.meter >> d1.centimeter;
    return input;
}
ostream &operator<<(ostream &output, Distance &d1) // Overloding <<(extracttion ) Operator
{
    cout << "  Distance is  ";
    output << d1.meter << "  meter " << d1.centimeter << "  centimeter " << endl;
    return output;
}
void Distance ::Display()
{
    cout << "The Distance is " << meter << "  meter " << centimeter << "  centimeter " << endl;
}

int main()
{
    char choice;
    Distance d1, d2, d3;
    Distance d4(3, 55); // Using Parametirised Constructer
    d4.Display();

    cout << "Choose A Option To Perfom  Following  Operation " << endl
         << "(a) To Use + Operator  " << endl
         << "(b) To Use - Operator  " << endl
         << "(c) To Use << and >>  Operators  " << endl;
    cin >> choice;
    switch (choice)
    {

    case 'a': //  Using  + Operator
        cin >> d1 >> d2;
        d3 = d1 + d2;
        d3.Display();

        break;
    case 'b': // Using  - Operator
        cin >> d1 >> d2;
        d3 = d1 - d2;
        d3.Display();

        break;
    case 'c':
        cin >> d1;  //  Using  >>(insertion ) Operator
        cout << d1; //  Using  <<(extraction ) Operato
        break;

    default:
        cout << "Choose A Valid Option";
        break;
    }

    return 0;
}

/*
        Output
The Distance is 3  meter 55  centimeter         
Choose A Option To Perfom  Following  Operation 
(a) To Use + Operator  
(b) To Use - Operator  
(c) To Use << and >>  Operators  
a
Enter  Distance in (meter.centimeter ) Format  
5
55
Enter  Distance in (meter.centimeter ) Format  
4
85
The Distance is 10  meter 40  centimeter 


*/
// #include <iostream>
// using namespace std;

// class Distance
// {
//     int meter;
//     float centimeter;

// public:
//     Distance(){};             // Default Constructer
//     Distance(int m, float cm) // Parameterised Constructer
//     {
//         meter = m;
//         centimeter = cm;
//     }

//     Distance operator+(Distance &);
//     int operator==(Distance &);
//     friend Distance operator-(Distance &, Distance &);
//     friend istream &operator>>(istream &, Distance &);
//     friend ostream &operator<<(ostream &, Distance &);
//     void Display();
// };

// Distance Distance ::operator+(Distance &d1) // Overloding + Operator
// {
//     Distance temp;
//     temp.meter = meter + d1.meter;
//     temp.centimeter = centimeter + d1.centimeter;
//     if (temp.centimeter >= 100)
//     {
//         temp.centimeter -= 100;
//         temp.meter++;
//     }
//     return temp;
// }
// int Distance ::operator==(Distance &d1) // Overloding + Operator
// {
//      Distance temp;
//      temp = d1;
//      int  dis ;

//      if (meter==d1.meter )
//      {
//          if (centimeter == d1.centimeter)
//          {
//              dis = 1;
//          }

//      }
//      else{
//           dis = 0;
//      }
//      return dis;
// }
// Distance operator-(Distance &d1, Distance &d2) // Overloding - Operator
// {
//     Distance temp;
//     temp.meter = d1.meter - d2.meter;
//     temp.centimeter = d1.centimeter - d2.centimeter;
//     return temp;
// }

// istream &operator>>(istream &input, Distance &d1) // Overloding >>(insertion ) Operator
// {
//     cout << "Enter  Distance in (meter.centimeter ) Format  " << endl;
//     input >> d1.meter >> d1.centimeter;
//     return input;
// }
// ostream &operator<<(ostream &output, Distance &d1) // Overloding <<(extracttion ) Operator
// {
//     cout << "  Distance is  ";
//     output << d1.meter << "  meter " << d1.centimeter << "  centimeter " << endl;
//     return output;
// }
// void Distance ::Display()
// {
//     cout << "The Distance is " << meter << "  meter " << centimeter << "  centimeter " << endl;
// }

// int main()
// {
//     char choice;
//     Distance d1(2,55), d2(2,22), d3;
//     Distance d4(3, 55); // Using Parametirised Constructer
//     // d4.Display();
// if (d1==d2)
// {
//     cout<<"Distance Is Same"<<endl;
// }
// else{
//     cout<<"Distance Is NOt Same "<<endl;
// }

//     // cout << "Choose A Option To Perfom  Following  Operation " << endl
//     //      << "(a) To Use + Operator  " << endl
//     //      << "(b) To Use - Operator  " << endl
//     //      << "(c) To Use << and >>  Operators  " << endl;
//     // cin >> choice;
//     // switch (choice)
//     // {
//     // case 'a': //  Using  + Operator
//     //     cin >> d1 >> d2;
//     //     d3 = d1 + d2;
//     //     d3.Display();

//     //     break;
//     // case 'b': // Using  - Operator
//     //     cin >> d1 >> d2;
//     //     d3 = d1 - d2;
//     //     d3.Display();

//     //     break;
//     // case 'c':
//     //     cin >> d1;  //  Using  >>(insertion ) Operator
//     //     cout << d1; //  Using  <<(extraction ) Operato
//     //     break;

//     // default:
//     //     cout << "Choose A Valid Option";
//     //     break;
//     // }

//     return 0;
// }
