//  raunakranjann
//  Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
#include <iostream>
using namespace std;

    
int main()
{
    float num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    if (num==0)
    {
        cout<<"The input number is 0 "<<endl;

    }else if(num > 0)
    {
        cout<<"The input number is positive "<<endl;
    }else{
        cout<<"The input number is negative "<<endl;
    }
    
    
    return 0;
}