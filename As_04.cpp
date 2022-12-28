/* Write a Matrix driven program to perform following:
a) Input a matrix
b) Display matrix
c) Add two matrix
d )Multiply two matrixes
e) Transpose a matrix */

// #include <iostream>
// using namespace std;

// int main()
// {
//     char op;
//     cout << "Please Choose A Option To Perform Following Operation  " << endl;
//     cout << "a) Input a matrix" << endl;
//     cout << "b) Display matrix" << endl;
//     cout << "c) Add two matrix" << endl;
//     cout << "d) Multiply two matrixes" << endl;
//     cout << "e) Transpose a matrix  " << endl;
//     cin >> op;
//     switch (op)
//     {
//     case 'a':
//         int row, column;
//         cout << "Enter The Size Of Matrix In Row Or Column " << endl;
//         cin >> row >> column;
//         int matrix[4][4];
//         cout << "Enter The Elements Of Matrix " << endl;
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < column; j++)
//             {
//                 cin >> matrix[i][j];
//             }
//         }

//         break;

//     case 'b':
//         cout << "Enter The Size Of Matrix In Row Or Column " << endl;
//         cin >> row >> column;

//         cout << "Enter The Elements Of Matrix " << endl;
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < column; j++)
//             {
//                 cin >> matrix[i][j];
//             }
//         }
//         cout << "The Matrix Is " << endl;
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < column; j++)
//             {
//                 cout << matrix[i][j];
//             }
//             cout << endl;
//         }

//         break;

//     case 'c':
//         int r1, c1, r2, c2;
//         cout << "Enter The Size Of Row And Column For First Matrix " << endl;
//         cin >> r1 >> c1;
//         int m1[4][4];
//         cout << "Enter The Elements Of First  Matrix " << endl;
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 cin >> m1[i][j];
//             }
//         }
//         cout << "Enter The Size Of Row And Column For Second Matrix " << endl;
//         cin >> r2 >> c2;
//         if (r1 != r2 || c1 != c2)
//         {
//             cout << "Please Enter Same Size As First Matrix" << endl;
//             cin >> r2 >> c2;
//         }

//         int m2[4][4];
//         cout << "Enter The Elements Of Seconf  Matrix " << endl;
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 cin >> m2[i][j];
//             }
//         }

//         cout << "The Addition is :" << endl;
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {

//                 cout << m1[i][j] + m2[i][j];
//             }
//             cout << endl;
//         }
//         break;

//     case 'd':
//         int row1, column1, row2, column2;
//         cout << "Enter The Size Of Row And Column For First Matrix " << endl;
//         cin >> row1 >> column1;
//         int mat1[4][4];
//         cout << "Enter The Elements Of First  Matrix " << endl;
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < column1; j++)
//             {
//                 cin >> mat1[i][j];
//             }
//         }

//         cout << "Enter The Size Of Row And Column For Second Matrix " << endl;
//         cin >> row2 >> column2;
//         if (column1 != row2)
//         {
//             cout << "Please Enter Row Size Same As As First Matrix's Column Size" << endl;
//             cin >> row2;
//         }
//         int mat2[4][4];
//         cout << "Enter The Elements Of Second  Matrix " << endl;
//         for (int i = 0; i < row2; i++)
//         {
//             for (int j = 0; j < column2; j++)
//             {
//                 cin >> mat2[i][j];
//             }
//         }
//         int sum;
//         int mul[3][3];

//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < column2; j++)
//             {
//                 sum = 0;
//                 for (int k = 0; k < column2; k++)
//                 {
//                     sum = sum + mat1[i][k] * mat2[k][j];
//                     mul[i][j] = sum;
//                 }
//             }
//         }

//         cout << "The Multification  is :" << endl;
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < column2; j++)
//             {
//                 cout << mul[i][j];
//             }
//             cout << endl;
//         }
//         break;

//     case 'e':
//         int ro, col;
//         cout << "Enter The Size Of Row And Column For  Matrix " << endl;
//         cin >> row >> col;
//         cout << "Enter The Elements Of   Matrix " << endl;
//         int matrixt[4][4];
//         int transpose[4][4];
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cin >> matrix[i][j];
//             }
//         }

//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 transpose[j][i] = matrix[i][j];
//             }
//         }
//         cout << "The Transpose Is :" << endl;
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 cout << transpose[i][j];
//             }
//             cout << endl;
//         }
//         break;
//     default:
//         cout << "Please Choose A Valid Option " << endl;
//         break;
//     }
//     return 0;
// }

//  ************           USING CLASS
#include <iostream>
#include <conio.h>
using namespace std;
class Matrix
{

public:
    void InputMatrix();
    void DisplaytMatrix();
    void AddMatrix();
    void MultiplyMatrix();
    void TransposeMatrix();
};
void Matrix ::InputMatrix()
{
    int row, column;
    cout << "Enter The Size Of Matrix In Row Or Column " << endl;
    cin >> row >> column;
    int matrix[4][4];
    cout << "Enter The Elements Of Matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void Matrix ::DisplaytMatrix()
{
    int row, column;
    cout << "Enter The Size Of Matrix In Row Or Column " << endl;
    cin >> row >> column;
    int matrix[4][4];
    cout << "Enter The Elements Of Matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The Matrix Is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void Matrix ::AddMatrix()
{

    int r1, c1, r2, c2;
    cout << "Enter The Size Of Row And Column For First Matrix " << endl;
    cin >> r1 >> c1;
    int m1[4][4];
    cout << "Enter The Elements Of First  Matrix " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter The Size Of Row And Column For Second Matrix " << endl;
    cin >> r2 >> c2;
    if (r1 != r2 || c1 != c2)
    {
        cout << "Please Enter Same Size As First Matrix" << endl;
        cin >> r2 >> c2;
    }

    int m2[4][4];
    cout << "Enter The Elements Of Seconf  Matrix " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "The Addition is :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cout << m1[i][j] + m2[i][j];
        }
        cout << endl;
    }
}

void Matrix ::MultiplyMatrix()
{

    int row1, column1, row2, column2;
    cout << "Enter The Size Of Row And Column For First Matrix " << endl;
    cin >> row1 >> column1;
    int mat1[row1][column1];
    cout << "Enter The Elements Of First  Matrix " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter The Size Of Row And Column For Second Matrix " << endl;
    cin >> row2 >> column2;
    if (column1 != row2)
    {
        cout << "Please Enter Row Size Same As As First Matrix's Column Size" << endl;
        cin >> row2;
    }
    int mat2[row2][column2];
    cout << "Enter The Elements Of Second  Matrix " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    int sum;
    int mul[row1][column2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            sum = 0;
            for (int k = 0; k < row2; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
                mul[i][j] = sum;
            }
        }
    }

    cout << "The Multification  is :" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << mul[i][j]<<" ";
        }
        cout << endl;
    }
}

void Matrix ::TransposeMatrix()
{

    int ro, col;
    cout << "Enter The Size Of Row And Column For  Matrix " << endl;
    cin >> ro >> col;
    cout << "Enter The Elements Of   Matrix " << endl;
    int matrixt[4][4];
    int transpose[4][4];
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrixt[i][j];
        }
    }

    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = matrixt[i][j];
        }
    }
    cout << "The Transpose Is :" << endl;
    for (int i = 0; i < ro; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << transpose[i][j];
        }
        cout << endl;
    }
}
int main()
{
    char op;
    cout << "Please Choose A Option To Perform Following Operation  " << endl;
    cout << "a) Input a matrix" << endl;
    cout << "b) Display matrix" << endl;
    cout << "c) Add two matrix" << endl;
    cout << "d) Multiply two matrixes" << endl;
    cout << "e) Transpose a matrix  " << endl;
    cin >> op;
    switch (op)
    {
    case 'a':
        Matrix a;
        a.InputMatrix();

        break;
    case 'b':
        Matrix b;
        b.DisplaytMatrix();

        break;
    case 'c':
        Matrix c;
        c.AddMatrix();

        break;
    case 'd':
        Matrix d;
        d.MultiplyMatrix();

        break;
    case 'e':
        Matrix e;
        e.TransposeMatrix();

        break;
        break;
    default:
        cout << "Please Choose A Valid Option " << endl;
        break;
    }

    return 0;
}