// raunakranjann
// Question 3 : WCPP Program to calculate the LARGEST of 3 Numbers.
// Input : a, b, c
// Output : Largest of a, b, c

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first, second and third number " << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "The largest number is " << a << endl;
        }
        else
        {
            cout << "The largest number is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The largest number is " << b << endl;
        }
        else
        {
            cout << "The largest number is " << c << endl;
        }
    }

    return 0;
}