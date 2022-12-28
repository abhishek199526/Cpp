/*


Assume that a bank maintains two kinds of accounts ,are called as saving account and current
account .The saving account provides compound interest and withdrawal facilities but no cheque
book facility .The current account provides chequebook facility but no interest.Current account
holders should also maintain a minimum balance and if the balance falls below the level ,a service
charge is imposed.
Create a class account that stores customer name ,account number and type of account .From this
derive the classes cur_acct and sav_acct to make them more specific to their requirements.
Include necessary member functions in order to achieve the following tasks:
a.Include constructor for all the three classes.
b.Accept deposit amount from the customer and update the balance 
c.Display the balance.
d.Compute and deposit interest.
e.Permit withdrawal and update the balance.
f. Check for minimum balance ,impose penalty ,necessary and update the balance. 

*/
#include <iostream>
#include <string.h>
#include <math.h>
#include <conio.h>
using namespace std;

class Account
{
protected:
    string Ac_Holder_name, Ac_Type;
    int Ac_no;
    float Ac_Balance;

public:
    Account()
    {
        Ac_Holder_name = "Sanyam Jain(default)";
        Ac_no = 108;
        Ac_Balance = 10000;
        Ac_Type = "Saving(default)";
    }
    Account(string name, int no, string type, float bal)
    {

        Ac_Holder_name = name;
        Ac_no = no;
        Ac_Type = type;
        Ac_Balance = bal;
    }
    void InputData()
    {

        cout << "Enter Account Holder Name " << endl;
        getline(cin, Ac_Holder_name);
        cout << "Enter Account Number" << endl;
        cin >> Ac_no;
        cout << "Enter Account Type " << endl;
        cin >> Ac_Type;
        cout << "Enter Account Balance " << endl;
        cin >> Ac_Balance;
    }
    void Display()
    {
        cout << "\nAccount Number - " << Ac_no << endl
             << "\nAccount Holder - " << Ac_Holder_name << endl
             << "\nAccount Type   - " << Ac_Type << endl
             << "\nAccount Balance - " << Ac_Balance << " Rs" << endl;
    }
    void Deposit()
    {
        float deposit;
        cout << "Enter How Much Amount You Want To Deposit " << endl;
        cin >> deposit;
        Ac_Balance += deposit;
        cout << "\n"
             << deposit << " Rs. Has Been Deposited In Your Account" << endl;
        cout << "\nAfter Deposit  Account balance is " << Ac_Balance << " Rs  " << endl;
    }
};
class Cur_Acct : public Account
{
    float interest;

public:
    void comp_int()
    {
        int time1, interest_rate;
        interest_rate = 10;
        cout << "\n Enter Time in years  since you deposited your amount  ";
        cin >> time1;
        interest = Ac_Balance * pow(1 + interest_rate / 100.0, time1) - Ac_Balance;
        cout << "Interset amount is after " << interest_rate << "% Interest Rate is " << interest << " Rs  " << endl;

        Ac_Balance = Ac_Balance + interest;
        cout << " \nAfter Updation  of Interest  Account balance is  " << Ac_Balance << " Rs  " << endl;
    }
    void Withdrawal()
    {
        int acno;
        float withdraw;
        cout << "Enter Your Acoount Number" << endl;
        cin >> acno;
        if (acno == Ac_no)
        {
            cout << "Your Balance is " << Ac_Balance << " Rs." << endl;
        }
        else
        {
            cout << "You Entered A Wrong Account Number " << endl;
            cout << "Please Try Again " << endl;

            cout << "Enter Your Acoount Number" << endl;
            cin >> acno;
        }
        cout << "Enter How Much amount You Want To Withdraw" << endl;
        cin >> withdraw;

        if (withdraw > Ac_Balance)
        {
            cout << "You Don't have Sufficient Balance To Withdraw " << endl
                 << "Please Enter Amount Again" << endl;
            cout << "Enter How Much amount You Want To Withdraw" << endl;
            cin >> withdraw;
        }

        Ac_Balance -= withdraw;

        cout << "\nYou Have Successfully Withdrawed  " << withdraw << " Rs From The Account " << endl;
        cout << "\nAfter withdrawal  Account balance is " << Ac_Balance << " Rs  " << endl;
    }
};
class Sav_Acct : public Account
{
    int chq_bk;
    int service_charge;

public:
    int min_bal()
    {
        int can_withdraw = 1;
        if (Ac_Balance <= 5000)
        {
            service_charge = 100;
            Ac_Balance = Ac_Balance - service_charge;
            cout << "\nPenality imposed of Rs. " << service_charge << " because balance is below  5000 Rs ." << endl;
            can_withdraw = 0;
        }
        else
        {
            cout << "\n No Service Charge  imposed" << endl;
            ;
        }
        return can_withdraw;
    }
    void Withdrawal()
    {
        int acno, amount;

        cout << "Enter Your Acoount Number" << endl;
        cin >> acno;

        if (acno == Ac_no)
        {
            cout << "Your Balance is " << Ac_Balance << " Rs." << endl;
        }
        else
        {
            cout << "You Entered A Wrong Account Number " << endl;
            cout << "Please Try Again " << endl;

            cout << "Enter Your Acoount Number" << endl;
            cin >> acno;
        }
        cout << "Enter How Much amount You Want To Withdraw" << endl;
        cin >> amount;
        int can_withdraw = min_bal();
        if (can_withdraw == 1)
        {
            if (Ac_Balance >= amount)
            {
                Ac_Balance -= amount;
                cout << "You Have Successfully Withdrawed  " << amount << " Rs From The Account " << endl;
                cout << "After withdrawal  Account balance is" << Ac_Balance << " Rs  " << endl;
            }
        }
        else
        {
            cout << "You Don't have Sufficient Balance To Withdraw " << endl;
        }
    }
};

int main()
{
    Account ac; // Using Base(Account) class
    cout << "Using Base Account Features -" << endl;
    ac.InputData();
    cout << "Depositing In Base Account" << endl;
    ac.Deposit();
    cout << "Displaying Base Account details" << endl;
    ac.Display();

    Cur_Acct cur_ac; // Using  Derived(Curr_Acct) class
    cout << "Using Current Account Features -" << endl;
    cur_ac.InputData();
    cout << "Depositing In  Current Account" << endl;
    cur_ac.Deposit();
    cout << "Calculating Compound Interest Of Current Account" << endl;
    cur_ac.comp_int();
    cout << "Wihthdrawl from Current Account" << endl;
    cur_ac.Withdrawal();
    cout << "Displaying Current Account Details" << endl;
    cur_ac.Display();

    Sav_Acct sav_ac; // Using  Derived(Sav_Acct) class
    cout << "Using Saving Account Features -" << endl;
    sav_ac.InputData();
    cout << "Depositing In Saving Account" << endl;
    sav_ac.Deposit();
    cout << "Using Minimum Balance Feature of Saving Account" << endl;
    sav_ac.min_bal();
    cout << "Wihthdrawl from Saving Account" << endl;
    sav_ac.Withdrawal();
    cout << "Displaying Saving Account Details" << endl;
    sav_ac.Display();

    return 0;
}

/*
                Output for Base Account 
                
            Using Base Account Features -
            Enter Account Holder Name    
            Sanyam Jain
            Enter Account Number
            1002
            Enter Account Type 
            Saving
            Enter Account Balance 
            5000
            Depositing In Base Account
            Enter How Much Amount You Want To Deposit 
            1999

            1999 Rs. Has Been Deposited In Your Account

            After Deposit  Account balance is 6999 Rs  
            Displaying Base Account details

            Account Number - 1002

            Account Holder - Sanyam Jain

            Account Type   - Saving

            Account Balance - 6999 Rs

*/

/*
                Output Of Current Account 

            Using Current Account Features -
            Enter Account Holder Name       
            Sanyam Jain
            Enter Account Number
            1003
            Enter Account Type 
            Current
            Enter Account Balance 
            3000
            Depositing In  Current Account
            Enter How Much Amount You Want To Deposit 
            2300

            2300 Rs. Has Been Deposited In Your Account     

            After Deposit  Account balance is 5300 Rs       
            Calculating Compound Interest Of Current Account

             Enter Time in years  since you deposited your amount  3
            Interset amount is after 10% Interest Rate is 1754.3 Rs  

            After Updation  of Interest  Account balance is  7054.3 Rs
            Wihthdrawl from Current Account
            Enter Your Acoount Number
            1003
            Your Balance is 7054.3 Rs.
            Enter How Much amount You Want To Withdraw
            7000

            You Have Successfully Withdrawed  7000 Rs From The Account

            After withdrawal  Account balance is 54.2998 Rs
            Displaying Current Account Details

            Account Number - 1003

            Account Holder - Sanyam Jain

            Account Type   - Current

            Account Balance - 54.2998 Rs


*/

/*
                    Output Of Saving Account
                    Using Saving Account Features -
                    Enter Account Holder Name      
                    Sanyam Jain
                    Enter Account Number
                    1004
                    Enter Account Type 
                    Saving
                    Enter Account Balance 
                    2000
                    Depositing In Saving Account
                    Enter How Much Amount You Want To Deposit 
                    1000
                    
                    1000 Rs. Has Been Deposited In Your Account    
                    
                    After Deposit  Account balance is 3000 Rs      
                    Using Minimum Balance Feature of Saving Account
                    
                    Penality imposed of Rs. 100 because balance is below  5000 Rs .
                    Wihthdrawl from Saving Account
                    Enter Your Acoount Number
                    1004
                    Your Balance is 2900 Rs.
                    Enter How Much amount You Want To Withdraw
                    1000
                    
                    Penality imposed of Rs. 100 because balance is below  5000 Rs .
                    You Don't have Sufficient Balance To Withdraw
                    Displaying Saving Account Details
                    
                    Account Number - 1004
                    
                    Account Holder - Sanyam Jain
                    
                    Account Type   - Saving
                    
                    Account Balance - 2800 Rs
                    
                    
*/