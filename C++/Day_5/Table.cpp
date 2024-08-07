// raunakranjann
// Question 2 : WAP to print the multiplication table of a number, entered by the user. 
#include <iostream>
using namespace std;

    
int main()
{
        int num;
    cout<<"Enter the number to print its multiplication table "<<endl;
    cin>>num;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    
    return 0;
}