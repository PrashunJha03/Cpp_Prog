#include <iostream>
using namespace std;

int main()
{
    int digit  = 121;
    int reverse = 0;

    int temp =digit;
    
    if(temp < 0)
    {
        return 0;
    }
    else
    {
        while(temp > 0)
    {
        int remainder = temp % 10;
        reverse = reverse * 10  + remainder;
        temp  = temp /10;
    }
    //cout << temp;
    cout<< reverse;
    }
    

    if( digit  ==  reverse )
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Number is NOT palindrome";
    }
    return 0;
}