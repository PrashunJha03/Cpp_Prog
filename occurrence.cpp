//14. Frequency of Each DigitPrint how many times each digit (0–9) occurs in a number
#include <iostream>
using namespace std;

int main()
{
    int number, digit;
    int frequency[10] = {0};

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;

    if (number == 0)
    {
        frequency[0] = 1;
    }

    while (number != 0)
    {
        digit = number % 10;
        frequency[digit]++;
        number = number / 10;
    }

    cout << "Frequency of each digit:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << i << " occurs "
             << frequency[i] << " times" << endl;
    }

    return 0;
}

