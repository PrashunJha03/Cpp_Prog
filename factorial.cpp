#include <iostream>
using namespace std;
int main()
{
    int res =1 ;
    int n;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       res = res * i;  
     }

    cout<<"Factorial is : ";
    cout<<res;
}