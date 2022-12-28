/*
Write a class template to represent a generic vector . Include member function to  perform the
following tasks: 
a. To create the vector
b. To modify the value of a given element
c. To multiply by a scalar value
d. To display the vector in the form (10,20,30……) 
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
template <class Vector>
class vector
{
    float *p;
    int size;

public:
    void creat_vector(Vector a);
    void set_element(int i, Vector value);
    void modify(void);
    void multiply(Vector b);
    void display(void);
};

template <class Vector>
void vector<Vector>::creat_vector(Vector a)
{
    size = a;
    p = new float[size];
}

template <class Vector>
void vector<Vector>::set_element(int i, Vector value)
{
    p[i] = value;
}
template <class Vector>
void vector<Vector>::multiply(Vector b)
{
    for (int i = 0; i < size; i++)
        p[i] = b * p[i];
}
template <class Vector>
void vector<Vector>::display(void)
{
    cout << "p[" << size << "]=(";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {

            cout << p[i];
        }
        else
        {
            cout << p[i] << ",";
        }
    }

    cout << ")" << endl;
}
template <class Vector>
void vector<Vector>::modify(void)
{

    int i;
    cout << " to edit a given element enter position of the element: ";
    cin >> i;
    i--;
    cout << " Now enter new value of " << i + 1 << "th element: ";
    Vector v;
    cin >> v;
    p[i] = v;
    cout << " Now new contents: " << endl;
    display();
    cout << " to delete an element enter position of the element:";
    cin >> i;

    i--;
    for (int j = i; j < size; j++)
    {
        p[i] = p[i + 1];
    }
    size--;
    cout << " New contents: " << endl;
    display();
}
int main()
{
    vector<float> Vec1;
    int s;
    cout << " Enter size of vector: ";
    cin >> s;
    Vec1.creat_vector(s);
    cout << " Enter " << s << " elements one by one:" << endl;
    for (int i = 0; i < s; i++)
    {
        float v;
        cin >> v;
        Vec1.set_element(i, v);
    }
    cout << " Now contents:" << endl;
    Vec1.display();
    cout << " to multiply this vector by a scalar quantity enter this scalar quantity: ";
    float m;
    cin >> m;
    Vec1.multiply(m);
    cout << " Now contents: " << endl;
    Vec1.display();
    Vec1.modify();
    return 0;
}

/*

                                Output

                    Enter size of vector: 5
                     Enter 5 elements one by one:
                    9
                    18
                    27
                    36
                    45
                     Nowcontents:
                    p[5]=(9,18,27,36,45)
                     to multiply this vector by a scalar quantity enter this scalar quantity: 2
                     Now contents: 
                    p[5]=(18,36,54,72,90)
                     to edit a given element enter position ofthe element: 3
                     Now enter new value of 3th element: 30
                     Now new contents: 
                    p[5]=(18,36,30,72,90)
                     to delete an element enter position of the element:4
                     New contents: 
                    p[4]=(18,36,30,90)
*/