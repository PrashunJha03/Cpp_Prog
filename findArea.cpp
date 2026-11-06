#include<iostream>
using namespace std;

float area(float r)
{
    float pi = 3.14;
    float area = pi * r * r;
    cout<<"Area of circle :"<<area;
    return area;
}

float circumference(float r)
{
    float pi = 3.14;
    float circumference = 2 * pi  * r;
    cout<<"circumference :"<<circumference;
    return circumference;
}

int main()
{
    char opt;
    cout<<"Enter Option :";
    cin>>opt;
    float radius;
    cout<<"Enter the radius :";
    cin>>radius;
    switch(opt)
    {
        case '1':
        area(radius);
        break;
        case '2':
        circumference(radius);
        break;
        default:
        cout<<"Invalid Entry !!"<<endl;
        break;

  }
  return 0;
    
    
   
}