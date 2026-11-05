/** 16. Write a C++ program to calculate the parking charges for a vehicle based on the 
number of hours parked.Parking Duration RateFirst 2 hours₹20 per hourNext 3 hours₹30 per hourBeyond 5 hours₹50 per hour- Read the number of hours parked.- Calculate parking charges progressively based on the duration.-
 Add a βixed maintenance charge of ₹10.- Display parking duration, parking charges, maintenance charge, and total amount payable.*/

 #include <iostream>
using namespace std;

int main()
{
    int hours;
    float charge, total;

    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 0)
    {
        cout << "Invalid parking duration";
        return 0;
    }

    if (hours <= 2)
    {
        charge = hours * 20;
    }
    else if (hours <= 5)
    {
        charge = 2 * 20 + (hours - 2) * 30;
    }
    else
    {
        charge = 2 * 20 + 3 * 30
               + (hours - 5) * 50;
    }

    total = charge + 10;

    cout << "Parking duration: " << hours
         << " hours" << endl;
    cout << "Parking charges: Rs. " << charge << endl;
    cout << "Maintenance charge: Rs. 10" << endl;
    cout << "Total amount payable: Rs. " << total << endl;

    return 0;
}