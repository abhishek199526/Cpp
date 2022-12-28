/*Write the definition for a class called Rectangle that has floating point datamembers length and
width .The class has the following member functions:
void set length (float) to set the length data member
void set width (float) to set the width data member
float perimeter() to calculate and return the perimeter of the rectangle
float area() to calculate and return the area of the rectangle
void show() to display the length and width of the rectangle
int same Area (Rectangle) that has one parameter of type Rectangle .same Area returns 1 if the two
Rectangles have the same area , and returns 0 if they don't.
1.Write the definitions for each of the above member functions.
2.Write main function to create two rectangle objects.Set the length and width of the first rectangle
to 5 and 2.5 . Set the length and width of the second rectangle to 5 and 18.9 .Display each rectangle and its area and  perimeter.
3.Check whether the two Rectangles have the same area and print amessage indicating the result.
Set the length and width of the first rectangle to 15 and 6.3. Display each Rectangle and its area
and perimeter again .Again ,check whether the two Rectangles have the same area and print a
message indicating the result.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    void setlength(float l);
    void setwidth(float w);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle);
};

void Rectangle ::setlength(float l)
{
    length = l;
}
void Rectangle ::setwidth(float w)
{
    width = w;
}
float Rectangle ::perimeter()
{
    float perimeter = 2.0 * (length + width);

    return perimeter;
}
float Rectangle ::area()
{

    float area = length * width;
    return area;
}
void Rectangle ::show()
{
    cout << endl
         << "\tLength - " << length
         << "\t\tWidth - " << width << endl;
    cout << "\tPerimeter - " << perimeter()
         << "\tArea - " << area() << endl;
}
int Rectangle::sameArea(Rectangle r)
{
    float firstarea = length * width;
    float secondarea = r.length * r.width;
    if (firstarea == secondarea)
        return 1;
    else
        return 0;
}
int main()
{

    //  **********     FOR FIRST PART
    Rectangle r1, r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
    cout << endl
         << "For First Rectangle " << endl;
    r1.show();
    cout << endl
         << "For Second Rectangle " << endl;
    r2.show();

    //  ******************    FOR SECOND PART

    r1.setlength(15);
    r1.setwidth(6.3);

    cout << endl
         << "For First  Rectangle " << endl;
    r1.show();
    cout << endl
         << "For Second Rectangle " << endl;
    r2.show();

    if (r1.sameArea(r2))
    {
        cout << "\t\tArea Is Same" << endl;
    }
    else
    {
        cout << "\t\tArea Is Not Same" << endl;
    }

    return 0;
}
/*
            OutPut  for First Part 
            
For First Rectangle 

        Length - 5              Width - 2.5 
        Perimeter - 15  Area - 12.5

For Second Rectangle 

        Length - 5              Width - 18.9
        Perimeter - 47.8        Area - 94.5 


         OutPut  for Second  Part

 For First  Rectangle 

        Length - 15             Width - 6.3
        Perimeter - 42.6        Area - 94.5

For Second Rectangle 

        Length - 5              Width - 18.9
        Perimeter - 47.8        Area - 94.5
                Area Is Same 
*/