//19. WAC++ program to print the following pattern based on number of lines entered by user:   *  * * * * ** * * *
#include <iostream>
using namespace std;
.\44

int main()
{
    int n;

    cout << "Enter number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}