/*
 Define a class to represent a Bank Account .Include the following  members :
Data Members:
i. Name of the depositor
ii. Account number
iii. Type of account
iv. Balance amount in the account
Member Functions:
1. To Input initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Also write constructor for this class that takes four arguments.It should also handle type of
account as savings by default.  */

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Account //Declaring Class
{
    string Ac_Holder_name;
    int Ac_no;
    string Ac_type = "Saving";
    float Ac_balance;

public:
    Account(); //Default Constructer

    Account(string, int, string, float); //Parameterized Constructer
    void InputData();
    void Deposit();
    void Withdraw();
    void Display();
};
Account ::Account()
{

    Ac_Holder_name = "User(default Case)";
    Ac_no = 100;
    Ac_balance = 0;
}
Account ::Account(string name, int no, string type, float bal)
{

    Ac_Holder_name = name;
    Ac_no = no;
    Ac_type = type;
    Ac_balance = bal;
}
void Account ::InputData()
{
    cout << "Enter Account Holder Name " << endl;
    getline(cin, Ac_Holder_name);
    cout << "Enter Account Number" << endl;
    cin >> Ac_no;
    cout << "Enter Account Type " << endl;
    cin >> Ac_type;
    cout << "Enter Account Balance " << endl;
    cin >> Ac_balance;
}

void Account ::Deposit()
{
    float deposit;
    cout << "Enter How Much Amount You Want To Deposit " << endl;
    cin >> deposit;
    Ac_balance += deposit;
    cout << deposit << " Rs. Has Been Deposited In Your Account" << endl;
}
void Account ::Withdraw()
{
    int acno;
    float withdraw;
    cout << "Enter Your Account Number" << endl;
    cin >> acno;
    if (acno == Ac_no)
    {
        cout << "Your Balance is " << Ac_balance << " Rs." << endl;
    }
    else
    {
        cout << "You Entered A Wrong Account Number " << endl;
        cout << "Please Try Again " << endl;

        cout << "Enter Your Account Number" << endl;
        cin >> acno;
    }
    cout << "Enter How Much Amount You Want To Withdraw" << endl;
    cin >> withdraw;

    if (withdraw > Ac_balance)
    {
        cout << "You Don't have Sufficient Balance To Withdraw " << endl
             << "Please Enter Amount Again" << endl;
        cout << "Enter How Much Amount You Want To Withdraw" << endl;
        cin >> withdraw;
    }

    Ac_balance -= withdraw;

    cout << "You Have Successfully Withdrawed  " << withdraw << " Rs From The Account " << endl;
}

void Account ::Display()
{
    cout << "Account Number - " << Ac_no << endl
         << "Account Holder - " << Ac_Holder_name << endl
         << "Account Type   - " << Ac_type << endl
         << "Account Balance - " << Ac_balance << " Rs" << endl;
}
int main()
{

    Account Ac1("Sanyam Jain", 1025, "Current", 2500); // Using Parametirsed Constructer
    cout << "Information Using   Parameterized Constructer " << endl;
    Ac1.Display();
    Account Ac;
    Ac.InputData();
    cout << "Depositing In Account" << endl;
    Ac.Deposit();
    cout << "Withdrawing from Account" << endl;
    Ac.Withdraw();
    cout << "Data Of Account " << endl;
    Ac.Display();
    return 0;
}

/*
            Output
            
Information Using   Parameterized Constructer 
Account Number - 1025
Account Holder - Sanyam Jain
Account Type   - Current
Account Balance - 2500 Rs
Enter Account Holder Name 
Sanyam Jain
Enter Account Number
1035
Enter Account Type 
Saving
Enter Account Balance 
3000
Depositing In Account
Enter How Much Amount You Want To Deposit 
2000
2000 Rs. Has Been Deposited In Your Account
Withdrawing from Account
Enter Your Account Number
1035
Your Balance is 5000 Rs.
Enter How Much Amount You Want To Withdraw
6000
You Don't have Sufficient Balance To Withdraw 
Please Enter Amount Again
Enter How Much Amount You Want To Withdraw
4000
You Have Successfully Withdrawed  4000 Rs From The Account 
Data Of Account
Account Number - 1035
Account Holder - Sanyam Jain
Account Type   - Saving
Account Balance - 1000 Rs


*/