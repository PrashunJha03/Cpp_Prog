//17. Write a C++ program to implement a number guessing game.- Store a secret number between 1 and 100.- Allow the user a maximum of 7 attempts.- After each incorrect guess, display whether the guessed number is higher or lower than the secret number.- If the user guesses correctly, display the attempt number and terminate the loop using break.- If all attempts are exhausted, display the secret number

#include <iostream>
using namespace std;

int main()
{
    int secret = 42;
    int guess;

    for (int i = 1; i <= 7; i++)
    {
        cout << "Attempt " << i
             << ": Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess == secret)
        {
            cout << "Correct guess!" << endl;
            cout << "You guessed it in "
                 << i << " attempts." << endl;
            break;
        }
        else if (guess > secret)
        {
            cout << "Your guess is higher than the secret number."
                 << endl;
        }
        else
        {
            cout << "Your guess is lower than the secret number."
                 << endl;
        }

        if (i == 7)
        {
            cout << "All attempts exhausted!" << endl;
            cout << "The secret number was: "
                 << secret << endl;
        }
    }

    return 0;
}