#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =  1;
    for(int i=1; i<=n;i++)
    {
        fact =  fact * i;
    }
    return fact;
}

int main()
{
    int number, remainder, temp, sum  = 0;
    cout<<"Enter Number :";
    cin>>number;
    temp = number;
    if(temp < 0)
    {
        return 0;
    }

    while(temp>0)
    {
        remainder =  temp % 10;
        sum = sum + factorial(remainder);
        temp = temp/10;
    }
  
     
    if(number == sum)
    {
        cout<<"Number is strong";
    }
    else
    {
        cout<<"No strong ";
    }

    return 0;
}