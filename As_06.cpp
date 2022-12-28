/*Write the definition for a class called complex that has floating point datamembers for storing real
and imaginary parts. The class has the following member functions:
void set (float,float )to set the specified value in object
void disp() to display complex number object 
complex sum(complex) to sum two complex numbers & return complex number
1.Write the definitions for each of the above member functions. 
2.Write main function to create three complex number objects. Set the value of  objects and call
sum() to calculate sum and assign it in third object.Display all complex numbers.*/

#include <iostream>
#include <conio.h>
using namespace std;

class complex
{
private:
    float real, imag;

public:
    void set(float, float);
    void disp();
    complex sum(complex);
};
void complex ::set(float r, float i)
{
    real = r;
    imag = i;
}

void complex ::disp()
{
    cout << " " << real << " + " << imag << "i" << endl;
}

complex complex ::sum(complex comp)
{
    complex temp;
    temp.real = real + comp.real;
    temp.imag = imag + comp.imag;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.set(6, 9);
    c2.set(2, 4);
    c3 = c1.sum(c2);
    cout << "\nFirst Complex Number is - ";
    c1.disp();
    cout << "\nSecond Complex Number is - ";
    c2.disp();
    cout << "\nSum  of Complex Numbers is  is - ";
    c3.disp();
    return 0;
}

/*
                    Output

                    
First Complex Number is -  6 + 9i        

Second Complex Number is -  2 + 4i       

Sum  of Complex Numbers is  is -  8 + 13i

*/

//      ************************************** CONSTRUCTER
// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     float real;
//     float imag;

// public:
//     complex();
//     complex(int r, int i);

//     void display();
//     void sum(complex c1, complex c2);
// };

// complex ::complex()
// {
//     real = 0;
//     imag = 0;
// }
//    complex :: complex(int r, int i)
//   {

//         real = r;
//         imag = i;
//     }

// void complex ::display()
// {
//     cout << "The Complex Number is : " << real << " + " << imag << "i" << endl;
// }
// void complex :: sum(complex c1, complex c2)
// {
//     float sumreal, sumimag;

//     sumreal = c1.real + c2.real;
//     sumimag = c1.imag + c2.imag;
//     cout << "\t   The Sum is : " << sumreal << " + " << sumimag << "i" << endl;
// }
// int main()
// {
// complex c1(2,3), c2(3,6),sum;
// c1.display();
// c2.display();
// sum.sum(c1,c2);

//     return 0;
// }

//  *******************       USING FRIEND FUNCTION ***************
// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     float real;
//     float imag;

// public:
//     complex();
//     complex(int r, int i);

//     void display();
//    friend  complex sum(complex c1, complex c2);
// };

// complex ::complex()
// {
//     real = 0;
//     imag = 0;
// }
//    complex :: complex(int r, int i)
//   {

//         real = r;
//         imag = i;
//     }

// void complex ::display()
// {
//     cout << "The Complex Number is : " << real << " + " << imag << "i" << endl;
// }
// complex   sum(complex c1, complex c2)
// {
//      complex temp;

//      temp.real = c1.real + c2.real;
//      temp.imag = c1.imag + c2.imag;
//     return temp;
// }
// int main()
// {
// complex c1(2,3), c2(3,6),c3;
// c1.display();
// c2.display();
//  c3 = sum(c1,c2);
// c3.display();

//     return 0;
// }
//         **************USING OPERTOR OVERLODING
// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     float real;
//     float imag;

// public:
//     complex();
//     complex(int r, int i);

//     void display();
//      complex  operator +(complex );
//      complex  operator -(complex );
// };

// complex ::complex()
// {
//     real = 0;
//     imag = 0;
// }
//    complex :: complex(int r, int i)
//   {

//         real = r;
//         imag = i;
//     }

// void complex ::display()
// {
//     cout << "The Complex Number is : " << real << " + " << imag << "i" << endl;
// }
// complex  complex  ::  operator+ (complex  c )
// {
//      complex temp;

//      temp.real = c.real + real;
//      temp.imag = c.imag + imag;
//     return (temp);
// }
// complex  complex  ::  operator- (complex  c )
// {
//      complex temp;

//      temp.real =  real  - c.real ;
//      temp.imag =  imag  - c.imag;
//     return (temp);
// }
// int main()
// {
// complex c1(2,3), c2(3,6),c3;
// c1.display();
// c2.display();
//  c3 =  c1+c2;
// c3.display();
// complex c4 = c3-c2;
// c4.display();
//     return 0;
// }
