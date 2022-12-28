/*

An educational institution wishes to maintaina database of its employees .The database is divided
into number of classes whose hierarchical relationships are shown in below figure .The figure also
shows minimumin formation required for each class.Specify all the classes and define functions to
create the database and retrieve individual information as and when required.
*/

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Staff
{
protected:
    int code;
    string name;

public:
    Staff()
    {
        code = 100;
        name = "User(default)";
    }
    Staff(int cd, string sname)
    {
        code = cd;
        name = sname;
    }
    void InputStaff()
    {
        cout << "Enter Your code" << endl;
        cin >> code;
        cin.ignore();
        cout << "Enter Your Name" << endl;
        getline(cin, name);
    }
    void DisplayStaff()
    {
        cout << "\nCode - " << code << endl
             << "\nName - " << name << endl;
    }
};

class Teacher : public Staff
{
    string subject, publication;

public:
    void InputTeacher()
    {
        InputStaff();
        cout << "Enter  Your Subject  " << endl;
        getline(cin, subject);

        cout << "Enter  Your Publication Name  " << endl;
        getline(cin, publication);
    }
    void DisplayTeacher()
    {
        DisplayStaff();
        cout << "\nSubject - " << subject << endl
             << "\nPublication - " << publication << endl;
    }
};

class Typist : public Staff
{
protected:
    float speed;

public:
    void InputTypist()
    {
        InputStaff();
        cout << "Enter  Your Speed  " << endl;
        cin >> speed;
    }
    void DisplayTypist()
    {
        DisplayStaff();
        cout << "\nSpeed - " << speed << " words/mintue" << endl;
    }
};

class Regular : public Typist
{
    float salary;

public:
    void InputRegTypist()
    {
        InputTypist();
        cout << "Enter Your Monthly Salary" << endl;
        cin >> salary;
    }
    void DisplayRegTypist()
    {
        DisplayTypist();
        cout << "\n Monthly Salary - " << salary << " Rs ." << endl;
    }
};

class Casual : public Typist
{
    int dailywages;

public:
    void InputCasTypist()
    {
        InputTypist();
        cout << "Enter Your Daily  Salary" << endl;
        cin >> dailywages;
    }
    void DisplayCasTypist()
    {
        DisplayTypist();
        cout << "\n Daily Wages - " << dailywages << " Rs." << endl;
    }
};
class Officer : public Staff
{
    char grade;

public:
    void InputOfficer()
    {
        InputStaff();
        cout << "Enter  Your Grade  " << endl;
        cin >> grade;
    }
    void DisplayOfficer()
    {
        DisplayStaff();
        cout << "\nGrade - " << grade << endl;
    }
};
int main()
{
    Staff s1;
    cout << "Using Staff Class" << endl;
    s1.InputStaff();
    s1.DisplayStaff();

    Teacher t1;
    cout << "Using Teacher Class" << endl;
    t1.InputTeacher();
    t1.DisplayTeacher();

    Typist tp1;
    cout << "Using Typist Class" << endl;
    tp1.InputTypist();
    tp1.DisplayTypist();

    Regular r1;
    cout << "Using Regular Class" << endl;
    r1.InputRegTypist();
    r1.DisplayRegTypist();

    Casual c1;
    cout << "Using Casual Class" << endl;
    c1.InputCasTypist();
    c1.DisplayCasTypist();

    Officer o1;
    cout << "Using Officer Class" << endl;
    o1.InputOfficer();
    o1.DisplayOfficer();

    return 0;
}

/*
                    Output

                    Enter Your code  
                    100
                    Enter Your Name
                    Sanyam Jain

                    Code - 100

                    Name - Sanyam Jain 
                    Using Teacher Class
                    Enter Your code    
                    101
                    Enter Your Name
                    Jhon
                    Enter  Your Subject  
                    English
                    Enter  Your Publication Name  
                    Rajkamal Publication

                    Code - 101

                    Name - Jhon

                    Subject - English

                    Publication - Rajkamal Publication
                    Using Typist Class
                    Enter Your code
                    102
                    Enter Your Name
                    Sam
                    Enter  Your Speed  
                    35

                    Code - 102

                    Name - Sam

                    Speed - 35 words/mintue
                    Using Regular Class
                    Enter Your code
                    103
                    Enter Your Name
                    Michel
                    Enter  Your Speed  
                    40
                    Enter Your Monthly Salary
                    50000

                    Code - 103

                    Name - Michel

                    Speed - 40 words/mintue

                     Monthly Salary - 50000 Rs .
                    Using Casual Class
                    Enter Your code
                    104
                    Enter Your Name
                    Joe  
                    Enter  Your Speed  
                    50
                    Enter Your Daily  Salary
                    4000

                    Code - 104

                    Name - Joe

                    Speed - 50 words/mintue

                     Daily Wages - 4000 Rs.
                    Using Officer Class
                    Enter Your code
                    105
                    Enter Your Name
                    Steve
                    Enter  Your Grade  
                    A

                    Code - 105

                    Name - Steve
                    
                    Grade - A




*/