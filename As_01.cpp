// Write aprogram to display the minimum, maximum, sum, search and average of elements of an array

// *****************         WITHOUT CLASS
// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int size, min=0, max=0, sum = 0, key, flag, posi;
//     float avg;
//     cout << "Enter The Size Of The Array\n";
//     cin >> size;
//     int arr[size];
//     cout << "Enter The Elements Of The Array\n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     max = arr[0];
//     min = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         // if (arr[i] < min)
//         // {
//         //     min = arr[i];
//         // }
//         else
//         {
//             min = arr[i];
//         }

//     }
//     cout << " Minimum Elemnet : " << min << endl;
//     cout << " Maximum Elemnet : " << max << endl;

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "The Sum is " << sum << endl;
//     avg = (float)(sum / size);
//     cout << "The Average is " << avg << endl;
//     cout << "Enter Any Number TO Search in The Array:  ";
//     cin >> key;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = 1;
//             posi = i + 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         if (posi == 1)
//         {

//             cout << "\nThe Number Found On " << posi << "st Position." << endl;
//         }
//         else if (posi == 2)
//         {
//             cout << "\nThe Number Found On " << posi << "nd Position." << endl;
//         }
//         else if (posi == 3)
//         {
//             cout << "\nThe Number Found On " << posi << "rd Position." << endl;
//         }
//         else if (posi > 3)
//         {
//             cout << "\nThe Number Found On " << posi << "th Position." << endl;
//         }
//     }
//     else
//     {
//         cout << "\nThe Number is Not Presnt In The Array" << endl;
//     }

//     return 0;
// }

//  ************* WITH CLASS

#include <iostream>
#include <conio.h>
using namespace std;
class Array
{
private:
    int size, min, max, sum = 0, key, flag, posi;
    float avg;

    int arr[10];

public:
    void InputData();
    void MinElement();
    void MaxElement();
    void SumElement();
    void AvgElement();
    void SearchElement();
};

void Array ::InputData()
{
    cout << "Enter The Size Of The Array\n";
    cin >> size;
    cout << "Enter The Elements Of The Array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void Array ::MaxElement()
{
    max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)

            max = arr[i];
    }

    cout << " Maximum Elemnet : " << max << endl;
}
void Array ::MinElement()
{

    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)

            min = arr[i];
    }

    cout << " Minimum Elemnet : " << min << endl;
}

void Array ::SumElement()
{

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The Sum is " << sum << endl;
}

void Array ::AvgElement()
{

    avg = (float)(sum / size);
    cout << "The Avg is " << avg << endl;
}
void Array ::SearchElement()
{

    cout << "Enter Any Number TO Search in The Array:  ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            posi = i + 1;
            break;
        }
    }
    if (flag == 1)
    {
        if (posi == 1)
        {

            cout << "\nThe Number Found On " << posi << "st Position." << endl;
        }
        else if (posi == 2)
        {
            cout << "\nThe Number Found On " << posi << "nd Position." << endl;
        }
        else if (posi == 3)
        {
            cout << "\nThe Number Found On " << posi << "rd Position." << endl;
        }
        else if (posi > 3)
        {
            cout << "\nThe Number Found On " << posi << "th Position." << endl;
        }
    }
    else
    {
        cout << "\nThe Number is Not Presnt In The Array" << endl;
    }
}

int main()
{
    Array a1;
    a1.InputData();
    a1.MaxElement();
    a1.MinElement();
    a1.SearchElement();
    a1.SumElement();
    a1.AvgElement();
    return 0;
}

/*
        Output
        Enter The Size Of The Array
        5
        Enter The Elements Of The Array
        120
        86
        25
        90
        12
        Maximum Elemnet : 120
        Minimum Elemnet : 12
        Enter Any Number TO Search in The Array:  25

        The Number Found On 3rd Position.
        The Sum is 333
        The Avg is 66



*/