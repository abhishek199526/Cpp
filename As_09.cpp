/*Develop a marksheet in C++ for university examination with following data: 
a)Students’name
b)Enrolment no
c)roll no
d)Theory marksin 5 subjects
e)Practical marks in five subjects
f)grade
Overload << and >> operator .Grade should be calculated for each subject .Use Constructor
overloading .Roll no should be auto generated */

#include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>
using namespace std;
class Marksheet
{
    string Student_Name;
    int Th_marks[5], Pr_marks[5];
    string Enrolment_no;

    char grade;

public:
    friend istream &operator>>(istream &, Marksheet &);
    friend ostream &operator<<(ostream &, Marksheet &);
};

istream &operator>>(istream &input, Marksheet &st) // Overloding >>(insertion ) Operator
{
    cout << "Enter Enrollment Number" << endl;
    input >> st.Enrolment_no;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Theory Marks of Subject " << i + 1 << " between (0-70)" << endl;
        input >> st.Th_marks[i];
        cout << "Enter Pratical Marks of Subject " << i + 1 << " between (0-30)" << endl;
        input >> st.Pr_marks[i];
    }
    return input;
}

ostream &operator<<(ostream &output, Marksheet &st) // Overloding <<(extracttion ) Operator

{
    int roll_no = rand() % 100;
    cout << "\n********************      STUDENT MARKSHEET     ********************   \n\n ";
    cout << "\nRoll No - " << roll_no << " (Auto Generated)" << endl;
    cout << "\nEnrollment Number is  - ";
    output << st.Enrolment_no << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\n\n Marks Of Subject " << i + 1 << "  are" << endl;

        cout << " Theory Marks  - ";
        output << st.Th_marks[i] << "      Pratical Marks - ";
        output << st.Pr_marks[i] << "\n";
    }

    int total, total_th = 0, total_pr;
    for (int i = 0; i < 5; i++)
    {
        total_th += st.Th_marks[i];
    }
    for (int i = 0; i < 5; i++)
    {

        total_pr += st.Pr_marks[i];
    }
    total = total_th + total_pr;
    cout << "\n\nYour Total Is " << total_th << "  Out Of 500\n"
         << endl;
    char Th_Grade, Pr_Grade;
    cout << "\n\n Theory Grades Are " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (st.Th_marks[i] >= 60)
        {
            Th_Grade = 'A';
            cout << "\nGrade is " << Th_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Th_marks[i] < 60 && st.Th_marks[i] >= 50)
        {
            Th_Grade = 'B';
            cout << "\nGrade is " << Th_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Th_marks[i] < 50 && st.Th_marks[i] >= 40)
        {
            Th_Grade = 'C';
            cout << "\nGrade is " << Th_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Th_marks[i] < 40 && st.Th_marks[i] >= 30)
        {
            Th_Grade = 'D';
            cout << "\nGrade is " << Th_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Th_marks[i] < 30 && st.Th_marks[i] >= 23)
        {
            Th_Grade = 'E';
            cout << "\nGrade is " << Th_Grade << " in Subject" << i + 1 << endl;
        }
        else
        {
            cout << "\nYou Are  Fail in Subject" << i + 1 << endl;
        }
    }

    cout << "\n\n Praticals  Grades Are " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (st.Pr_marks[i] >= 25)
        {
            Pr_Grade = 'A';
            cout << "\nGrade is " << Pr_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Pr_marks[i] < 25 && st.Pr_marks[i] >= 20)
        {
            Pr_Grade = 'B';
            cout << "\nGrade is " << Pr_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Pr_marks[i] < 20 && st.Pr_marks[i] >= 15)
        {
            Pr_Grade = 'C';
            cout << "\nGrade is " << Pr_Grade << " in Subject" << i + 1 << endl;
        }
        else if (st.Pr_marks[i] < 15 && st.Pr_marks[i] >= 10)
        {
            Pr_Grade = 'D';
            cout << "\nGrade is " << Pr_Grade << " in Subject" << i + 1 << endl;
        }
        else
        {
            cout << "\nYou Are  Fail in Subject" << i + 1 << endl;
        }
    }

    return output;
}

int main()
{

    srand(time(NULL));
    Marksheet st1;
    cin >> st1;  // Using >>(insertion ) Operator
    cout << st1; // Using <<(extracttion ) Operator

    return 0;
}
/*
            Output

    
Enter Enrollment Number
DE2002048
Enter Theory Marks of Subject 1 between (0-70)
65
Enter Pratical Marks of Subject 1 between (0-30)
28
Enter Theory Marks of Subject 2 between (0-70)
60
Enter Pratical Marks of Subject 2 between (0-30)
23
Enter Theory Marks of Subject 3 between (0-70)
56
Enter Pratical Marks of Subject 3 between (0-30)
20
Enter Theory Marks of Subject 4 between (0-70)
50
Enter Pratical Marks of Subject 4 between (0-30)
15
Enter Theory Marks of Subject 5 between (0-70)
70
Enter Pratical Marks of Subject 5 between (0-30)
30

********************      STUDENT MARKSHEET     ********************


Roll No - 38 (Auto Generated)

Enrollment Number is  - DE2002048


 Marks Of Subject 1  are
 Theory Marks  - 65      Pratical Marks - 28


 Marks Of Subject 2  are
 Theory Marks  - 60      Pratical Marks - 23


 Marks Of Subject 3  are
 Theory Marks  - 56      Pratical Marks - 20


 Marks Of Subject 4  are
 Theory Marks  - 50      Pratical Marks - 15


 Marks Of Subject 5  are
 Theory Marks  - 70      Pratical Marks - 30


Your Total Is 301  Out Of 500



 Theory Grades Are

Grade is A in Subject1

Grade is A in Subject2

Grade is B in Subject3

Grade is B in Subject4

Grade is A in Subject5


 Praticals  Grades Are

Grade is A in Subject1

Grade is B in Subject2

Grade is B in Subject3

Grade is C in Subject4

Grade is A in Subject5
    
    */