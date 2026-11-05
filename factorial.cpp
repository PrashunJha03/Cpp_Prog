//9. Factorial using LoopCompute factorial of a number using a for loop.

#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<< "Enter number for Factorial  :";
    cin>>num;
    int i;
    int res = 1;
    for(i=1;i<=num;i++)
    {
       res = res* i;
    }

    cout<<"Factorial of the number :"<<res;
}