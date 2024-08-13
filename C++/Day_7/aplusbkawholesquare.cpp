// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

#include <iostream>
using namespace std;

    int sq(int a, int b){
        return (a*a) + (b*b) + (2*a*b) ;
    }
int main()
{
     int num1, num2;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Enter the second number :"<<endl;
    cin>>num2;
    cout<<sq(num1,num2)<<endl;
    return 0;
}