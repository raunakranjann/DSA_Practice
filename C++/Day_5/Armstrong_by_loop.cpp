// raunakranjann
// Question 3 : WAP to input a number and check whether the number is an Armstrong
// number or not.
// An Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    int temp, sum = 0;
    temp = num;
    int m;
    while (num > 0)
    {
        m = num % 10;
        sum += m * m * m;
        num /= 10;
    }
    if (sum == temp)
    {
        cout << "The input number " << temp << " is Armstrong number" << endl;
    }
    else
    {
        cout << "The input number " << temp << " is not an Armstrong number" << endl;
    }

    return 0;
}