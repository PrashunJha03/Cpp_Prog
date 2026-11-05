#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
    return 0;
}