// Question 2 : Write a function to calculate the sum of digits of a number.
#include <iostream>
using namespace std;

    int sum(int a){
        int b = a;
        int s = 0;
        while (a>0)
        {
            b = a%10;
            s = s + b;
            a = a/10;

        }
        
        return s;
    }
int main()
{   
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<"The sum of the digits is "<<sum(num)<<endl;
    return 0;
}