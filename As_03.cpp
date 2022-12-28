/*Define a class in C++ with following description:
Private Members
A datamember Flightnumber of type integer
A datamember Destination of type string
A datamember Distance of type float
A datamember Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance Fuel
<=1000 500
more than 1000 and <= 2000 1100 
more than 2000 2200 
Public  Members
A function FEEDINFO() to allow user to enter values for FlightNumber, Destination, Distance&
call function CALFUEL() to calculate the equantity of Fuel. 
A function SHOWINFO() to allow user to view the content of all the data members */

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Tourist
{
private:
    int Flightnumber;
    string Destination;
    float Distance, Fuel;

public:
    void FEEDINFO();

    int CALFUEL();

    void SHOWINFO();
};
void Tourist ::FEEDINFO()
{
    cout << "Enter Flight Number : ";
    cin >> Flightnumber;

    cout << "Enter Your Destination : ";
    cin.ignore();
    getline(cin, Destination);
    // cin>>Destination;

    cout << "Enter  Distance Of Your Destination  : ";
    cin >> Distance;
}
int Tourist ::CALFUEL()
{

    if (Distance <= 1000)
    {
        Fuel = 500;
    }
    else if (Distance > 1000 && Distance <= 2000)
    {
        Fuel = 1100;
    }

    else
    {
        Fuel = 2200;
    }
    return Fuel;
}
void Tourist ::SHOWINFO()
{

    cout << "\nTourist information is :-" << endl
         << " \nFlight Number Is : " << Flightnumber << endl
         << " \nDestination  Is : " << Destination << endl
         << " \nDistance  Is :" << Distance << endl
         << " \nFuel Needed To Reach Desination "
         << Destination << " Is : " << Fuel << " Liters" << endl;
}

int main()
{
    Tourist tr1;
    tr1.FEEDINFO();
    tr1.CALFUEL();
    tr1.SHOWINFO();

    return 0;
}

/*
        OutPut
       Enter Flight Number : 1234
       Enter Your Destination : New Delhi
       Enter  Distance Of Your Destination  : 700

        Tourist information is :-
 
        Flight Number Is : 1234
 
        Destination  Is : New Delhi
 
        Distance  Is :700
 
        Fuel Needed To Reach Desination New Delhi Is : 500 Liters

*/