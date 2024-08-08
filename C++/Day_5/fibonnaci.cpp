// raunakranjann
// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
// This is a series where each number is a sum of previous 2 numbers in the series. Eg :
// 1 = 0 + 1,
// 2 = 1 + 1,
// 3 = 1 + 2,
// 5 = 2 + 3,
// 8 = 3 + 5 & so on.
#include <iostream>
using namespace std;

int main()
{

    int n, m, p, count;
    cout << "Enter the number to find fibonacci series : " << endl;
    cin >> count;

    n = 0;
    m = 1;

    if (count < 1 || count == 1)
    {
        cout << "The first number is 0" << endl;
    }
    else if (count > 1)
    {
        cout << "The first and second number is " << n << ", " << m << " and remainings are :" << endl;
    }

    for (int i = 2; i < count; i++)
    {
        p = n + m;
        cout << " " << p << " ";
        n = m;
        m = p;
    }

    return 0;
}