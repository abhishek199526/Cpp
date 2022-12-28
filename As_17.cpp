/*
Write a program to read a list containing item name,item code and cost interactively and
produce a three column output as shown below: 

Note that the name and code are left justified and the cost is right-justified with aprecision of
two digits .Training zeros are shown.Also fill the unused spaces with hyphens .
*/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>
using namespace std;
class Item
{
    char name[40];
    int code;
    float cost;

public:
    void get_data(char *n, int c, float co)
    {

        strcpy(name, n);
        code = c;
        cost = co;
    }
    void display();
};
void Item ::display()
{
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    cout << setw(40) << name;
    cout << setw(40) << code;
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(15) << cost << endl;
}

int main()
{
    Item a[5];
    a[0].get_data((char *)"Turbo C++", 1001, 250.95);
    a[1].get_data((char *)"C primer", 905, 95.7);
    a[2].get_data((char *)"Algorithm", 1111, 120.5);
    a[3].get_data((char *)"Vs_Code", 1009, 500.50);
    a[4].get_data((char *)"Code Blocks", 111, 120.50);

    cout << setw(40) << "NAME" << setw(39) << "CODE" << setw(17) << "COST" << endl;
    cout << setw(30) << "-";
    for (int i = 0; i < 67; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        a[i].display();
    }

    return 0;
}

/*

                                                        OutPut

                                  NAME                                      CODE           COST
                             --------------------------------------------------------------------
                               Turbo C++                                    1001         250.95  
                                C primer                                     905          95.70  
                               Algorithm                                    1111         120.50  
                                 Vs_Code                                    1009         500.50  
                             Code Blocks                                     111         120.50
   */