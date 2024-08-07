// raunakranjann
// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. 
// Armstrong number is a number that is equal to the sum of cubes of its digits. 
// Eg : 371 is an armstrong number. 
// 3*3*3 + 7*7*7 + 1*1*1 = 371
#include <iostream>
using namespace std;

    
int main()
{   int num,temp;
    temp = num;
    cout<<"Enter the three digit numbers : "<<endl;
    cin>>num;
    int a, b, c;
    a = num%10;     //units digit 
    temp = num/10;
    b = temp%10;    //tens place digit
    temp = temp/10;
    c = temp;       //hundred place digit 

    int as_num;
    as_num = a*a*a + b*b*b + c*c*c ;

    if(num == as_num){
        cout<<"The number "<<num<<" is Armstrong number."<<endl;
    }else{
        cout<<"The number "<<num<<" is not Armstrong number."<<endl;
    }

    return 0;
}