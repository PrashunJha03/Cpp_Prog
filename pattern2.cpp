/* 20. WAC++ program to print the following pattern based on number of * in βirst line entered by user:
* * *
* *
*
* *
* * *   */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of stars in first line: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}



