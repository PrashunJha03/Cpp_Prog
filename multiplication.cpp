//10. Multiplication Table GeneratorInput a number and print its table (10 rows)
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
}