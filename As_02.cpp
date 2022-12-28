/* 
Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng.math,science float
total float
Public member function of class student
ctotal() a function to calculate eng+math+science with float return type.
Takedata() Function to accept values for admno,sname,eng,science
Showdata() Function to display all the data members on the screen
 */

#include <iostream>
#include <conio.h>

using namespace std;
class Student
{
private:
    int admno;
    char sname[20];
    float eng, math, science;
    float total;

public:
    void Takedata(void);

    float ctotal(void);

    void Showdata(void);
};

void Student ::Takedata()
{
    cout << "Enter Student Admission No: " << endl;
    cin >> admno;
    cout << "Enter Student  Name : " << endl;
    cin >> sname;
    cout << "Enter Student Eng, Math, Science Marks" << endl;
    cin >> eng >> math >> science;
}

float Student ::ctotal()
{

    total = eng + math + science;
    return total;
}

void Student ::Showdata(void)
{
    cout << "\nStduent Name : " << sname << endl;
    cout << "\nStduent  Admission No. : " << admno << endl;
    cout << "\nTotal Marks : " << total << endl;
}

int main()
{

    int no;
    cout << "Enter The Total No Of Student " << endl;
    cin >> no;
    Student st[no];
    for (int i = 0; i < no; i++)
    {
        st[i].Takedata();
        st[i].ctotal();
    }
    for (int i = 0; i < no; i++)
    {
        cout << "\nData Of " << i + 1 << " Student Is " << endl;
        st[i].Showdata();
    }
    return 0;
}

/*
        OutPut
Enter The Total No Of Student 
2
Enter Student Admission No: 
100
Enter Student  Name : 
Sanyam
Enter Student Eng, Math, Science Marks
87
96
93
Enter Student Admission No: 
101
Enter Student  Name : 
Arun
Enter Student Eng, Math, Science Marks
84
90
95

Data Of 1 Student Is

Stduent Name : Sanyam

Stduent  Admission No. : 100

Total Marks : 276

Data Of 2 Student Is

Stduent Name : Arun

Stduent  Admission No. : 101

Total Marks : 269






*/

