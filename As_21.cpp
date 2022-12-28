/*

Write a function template for finding the minimum value contained in an array. 
*/
#include <iostream>
#include <conio.h>
using namespace std;
const int size = 5;
template <class T>
class vector
{
    T v[size];

public:
    vector(){};
    vector(T *b);
    void show();
    T minimum(vector<T> &m);
};

template <class T>
vector<T>::vector(T *b)
{
    for (int i = 0; i < size; i++)
        v[i] = b[i];
}

template <class T>

T vector<T>::minimum(vector<T> &m)
{
    int j = 0;
    for (int k = 1; k < size; k++)
    {
        if (m.v[j] > m.v[k])
            j = k;
    }
    return m.v[j];
}
template <class T>
void vector<T>::show()
{
    cout << "(" << v[0];
    for (int i = 1; i < size; i++)
    {
        cout << " " << v[i];
    }
    cout << ")\n";
}
int main()
{
    int x[size] = {5, 7, 3, 1, 8}; //size is 5;
    float y[size] = {1.2, 1.5, 2.3, 1.0, 0.501};
    vector<int> v1;
    vector<float> v2;

    v1 = x;
    v2 = y;
    cout << " Minimum value = " << v1.minimum(v1) << " of array";
    v1.show();
    cout << " Minimum value = " << v2.minimum(v2) << " of array";
    v2.show();
    return 0;
}

/*
                                    Output
                    Minimum value = 1 of array(5 7 3 1 8)
                    Minimum value = 0.501 of array(1.2 1.5 2.3 1 0.501)
 */