//15. Write a C++ program to calculate the electricity bill based on the number of units consumed. The bill should be calculated using the following slab rates:Units Consumed  Rate per Unit0–100 units₹3.00101–200 units₹4.50Above 200 units  ₹6.00An additional βixed charge of ₹50 is added to the electricity bill.

#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill, total;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Invalid units";
        return 0;
    }

    if (units <= 100)
    {
        bill = units * 3.00;
    }
    else if (units <= 200)
    {
        bill = 100 * 3.00 + (units - 100) * 4.50;
    }
    else
    {
        bill = 100 * 3.00 + 100 * 4.50
             + (units - 200) * 6.00;
    }

    total = bill + 50;

    cout << "Units consumed: " << units << endl;
    cout << "Electricity bill: Rs. " << bill << endl;
    cout << "Fixed charge: Rs. 50" << endl;
    cout << "Total bill: Rs. " << total << endl;

    return 0;
}