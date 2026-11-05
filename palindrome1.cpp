//13. Palindrome NumberCheck if a number is the same when reversed

#include<iostream>
using namespace std;


int main()
{
    int number, temp, reverse=0, remainder;
    cout<<"Enter Number : ";
    cin>>number;
    if(number<0)
    {
        return 0;
    }
    temp = number;

    while(temp !=  0)
    {
        remainder  = temp % 10;
        reverse  = reverse * 10 + remainder;
        temp = temp /10;
    }
    if(number  == reverse)
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }

}