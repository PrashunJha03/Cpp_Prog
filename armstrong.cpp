#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"enter number : ";
    cin>>num;
    int sum= 0;
    int remainder = 0 ;
    int original = num;
    while(original != 0)
    {
        remainder =  original % 10;
        sum +=  remainder * remainder * remainder;
        original =  original /10; 

    }
    if(num == sum )
    {
        cout<<"Number is Armstrong";
    }
    else
    {
        cout<<"NO Armstrong";
    }

}