/* Write a C++ program  for calculating volume of  sphere,cuboid and cylinder using function
  overloading.*/
#include <iostream>
#include <conio.h>
using namespace std;
float Volume(float r)
{

    float volume = (4 / 3) * 3.14 * r * r * r;
    return volume;
}
float Volume(float l, float b, float h)
{

    float volume = l * b * h;
    return volume;
}
float Volume(float r, float h)
{

    float volume = (3.14 * r * r * h);
    return volume;
}
int main()
{
    int input;
    float r, l, b, h, r2, h2;

    cout << "Please Choose Option For Getting Volume :  " << endl
         << " 1. For Sphere " << endl
         << " 2. For Cuboid " << endl
         << " 3. For Cylinder" << endl;

    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Enter The Radius of Sphere : ";
        cin >> r;
        cout << "The Volume of Spehere of Radius " << r << " is :" << Volume(r) << endl;

        break;
    case 2:
        cout << "Enter The Length , Width, Height  of Cuboid  : ";
        cin >> l >> b >> h;
        cout << "The Volume of  Cuboid  of   Length " << l << " , Width " << b << ", Height " << h << " is " << Volume(l, b, h) << endl;
        break;
    case 3:

        cout << "Enter The  Radius and  Height  of  Cylinder   : ";
        cin >> r2 >> h2;

        cout << "The Volume of  Cylinder  of Radius " << r2 << " and Height " << h2 << " is : " << Volume(r2, h2) << endl;
        break;

    default:
        cout << "Please Choose A Valid Option" << endl;
        break;
    }

    return 0;
}

/*
                         Output
                         
            Please Choose Option For Getting Volume :  
            1. For Sphere 
            2. For Cuboid 
            3. For Cylinder
            2
            Enter The Length , Width, Height  of Cuboid  : 5
            6
            7
            The Volume of  Cuboid  of   Length 5 , Width 6, Height 7 is 210

*/