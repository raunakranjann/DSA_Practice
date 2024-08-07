// raunakranjann
// Question 4 : Write a program to calculate the area of a circle. 
// Input : r (radius) 
// Output : PI*r*r (area)
#include <iostream>
using namespace std;

    
int main()
{
    float r, area;
    const float pi = 3.14;
    cout<<"Enter the radius of the circle : "<<endl;
    cin>>r;
    area = pi*r*r;
    cout<<"The area of the circle is " <<area<<endl;
    
    return 0;
}