/*
Create an array class . In it dynamically allocate memory for integer array of size according to value
 passed to constructor ,and write following methods
i. copy constructor
ii. destructor
iii. Overload [] operator.
iv. Overload << , >> operator.
 */
#include <iostream>
using namespace std;
class Array
{

public:
    int size;

    Array(){};

    int &operator[](int size1)
    {
        size = size1;
        int *arr = new int[size];
        return arr[size];
    }
     
    friend istream &operator>>(istream &, Array []);
    friend ostream &operator<<(ostream &, Array []);
};

istream &operator>>(istream &input, Array arr[])
{

    cout << "Enter The Elemnets Of The Array " << endl;
    for (int i = 0; i <size; i++)
    {
        input >> arr;
    }

    return input;
}

int main()
{
    Array ar[5] = {1,2,3,4};
    cin >> ar;

    return 0;
}

 