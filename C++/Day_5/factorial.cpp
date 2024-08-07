// raunakranjann
// Question 1 : WAP to find the Factorial of a number entered by the user. 
// Hint : factorial of a number (n) = n * (n-1) * (n-2) * (n-3) * ........... * 1 
// and exists for positive numbers only. We write factorial as n! 
// So, factorial of 0! = 1, 1! = 1, 2! = 2, 3! = 6, 4! = 24 and so on. 
// Note - Please do not confuse factorial with NOT EQUAL TO operator, they are not the same.
#include <iostream>
using namespace std;

int main()
{   int n , fact=1;
    cout<<"Enter the number to find the its factorial :"<<endl;
    cin>>n;
    if (n == 0 || n == 1)
    {
       cout<<"The factorial of " <<n<<" is "<<fact<<endl;
    }else{

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        
        cout<<"The factorial of " <<n<<" is "<<fact<<endl;
    }
    
    return 0;
}