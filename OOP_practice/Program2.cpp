// write a program to read two numbers from the keyboard and display the larger value on the screen. 
#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    
    cout<< "Enter first number"<<"\n";
    cin>>num1;
     cout<< "Enter second number"<<"\n";
    cin>>num2;
    if (num1>num2)
    {
        cout<<"the number "<< num1<< " is largest number";
    }else{
         cout<<"the number "<< num2<< " is largest number";
    }
    
    return 0;
}