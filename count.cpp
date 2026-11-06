#include <iostream>
using namespace std;


int main(){

    int number = 12321;
    int count = 0;
    if(number< 0 )
    { return 0;
    }
    while(number!=0)
    {
        number  =  number /10;
        count++;


    }

    cout << "Number in digits :"<<count;
}