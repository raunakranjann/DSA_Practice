// raunakranjann
// Question 5 : Flowchart & Pseudocode to print all multiples of 3 from 10 to 50. 
// Input : none 
// Output: 12 15 18 21 24 27 30 33 36 39 42 45 48 
// [Hint: To check if a number is a multiple of 3 we write, num % 3 == 0]
#include <iostream>
using namespace std;

    
int main()
{
    for (int n = 10; n < 50; n++)
    {
        if(n%3==0){
            cout<<" "<<n;
        }
    }
    
    return 0;
}