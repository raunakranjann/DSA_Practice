// Question 4 : Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

    int ans(int a, int b, int c){
        int greatest;
        if (a>b && a>c)
        {
            greatest = a;
        }else if (b>c && b>c)
        {
            greatest = b;
        }else{
            greatest = c;
        }
        
        return greatest;
    }
int main()
{
    int num1, num2, num3;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Enter the second number :"<<endl;
    cin>>num2;
     cout<<"Enter the third number :"<<endl;
    cin>>num3;
    cout<<"The greatest number is "<<ans(num1,num2,num3)<<endl;
    return 0;
}