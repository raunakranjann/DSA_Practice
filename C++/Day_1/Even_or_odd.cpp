// raunakranjann
// Question 4 : WCPP Program to print if a number N is EVEN or ODD. 
// Input : n 
// Output: Even or Odd 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if (n%2==0) 
    {
        cout<<"The number "<<n<<" is an even number."<<endl;
    }else{
        cout<<"The number "<<n<<" is an Odd number."<<endl;
    }
    
    return 0;
}