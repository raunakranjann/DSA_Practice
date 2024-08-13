// Question 1 : Write a function to check if a number is a palindrome in C++.(121 is a palindrome, 321 is not )
//   A number is called a palindrome if the number is equal to the reverse of a number.
//   Eg : 121 is a palindrome because the reverse of 121 is 121 itself.On the other hand,
//   321 is not a palindrome because the reverse of 321 is 123, which is not equal to 321.

#include <iostream>
using namespace std;

int reverse(int a)
{
    int m, n, b;
    m = a;

    b = 0;
    while (m > 0)
    {
        b = (b * 10) + m % 10;
        m = m / 10;
    }

    return b;
}
int main()
{
    int num, rnum;

    cout<<"Enter the number :"<<endl;
    cin>>num;
    rnum = reverse(num);

    if (rnum == num)
    {
        cout << "The number " << num << " is palindrome" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a palindrome" << endl;
    }

    return 0;
}