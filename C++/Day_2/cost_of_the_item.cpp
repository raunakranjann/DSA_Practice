// raunakranjann
// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as
// their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
// problem)

#include <iostream>
using namespace std;

int main()
{
    float cpencil, cpen, ceraser;
    cout << "Enter the cost of the pencil :" << endl;
    cin >> cpencil;
    cout << "Enter the cost of the pen :" << endl;
    cin >> cpen;
    cout << "Enter the cost of the eraser :" << endl;
    cin >> ceraser;
    float Totalcost;
    Totalcost = (cpencil + cpen + ceraser);
    float gst = (Totalcost*18)/100;
    float finalcost;
    finalcost = Totalcost + gst;

    cout<<"The total cost (including gst) is " <<finalcost<<endl;
    return 0;
}