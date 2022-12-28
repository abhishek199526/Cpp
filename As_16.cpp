/*

Create a base class called shape .Use this class to store two double type values that could be used to 
compute the area of figures , Derive two specific classes called triangle and rectangle from the base
shape .Add to the base class ,a member function get_data() to initialise baseclass datamembers and
another member function display_area() to compute and display the area of figures .Make
display_area() as a virtual function and redefine this function in the derived class to suit their
requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a rectangle
interactively and display the area.
Area of rectangle =x * y
Area of triangle = ½ * x *y

*/

#include <iostream>
#include <conio.h>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void get_data()
    {

        cin >> x >> y;
    };
    virtual void display_area() = 0;
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "\nBase  of Triangle - " << x << endl
             << "\nHeight  of Triangle - " << y << endl
             << "\nArea Of Triangle - " << (0.5 * x * y) << endl;
    }
};
class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "\nLength of Rectangle - " << x << endl
             << "\nWidth  of Rectangle - " << y << endl
             << "\nArea Of Rectangle - " << (x * y) << endl;
    }
};

int main()
{
    Triangle t1;
    cout << "Enter Details for Triangle" << endl;
    cout << "\nEnter the Base and Height Of Triangle" << endl;
    t1.get_data();
    cout << "Displaying Details of Triangle" << endl;
    t1.display_area();

    Rectangle r1;
    cout << "Enter Details for Rectangle" << endl;
    cout << "\nEnter the Length and Width Of Rectangle" << endl;
    r1.get_data();
    cout << "Displaying Details of Rectangle" << endl;
    r1.display_area();

    return 0;
}

/*
                    Output
                    Enter Details for Triangle

                    Enter the Base and Height Of Triangle
                    6
                    9
                    Displaying Details of Triangle

                    Base  of Triangle - 6

                    Height  of Triangle - 9

                    Area Of Triangle - 27
                    Enter Details for Rectangle

                    Enter the Length and Width Of Rectangle
                    2.7
                    6.9
                    Displaying Details of Rectangle

                    Length of Rectangle - 2.7

                    Width  of Rectangle - 6.9

                    Area Of Rectangle - 18.63


*/
