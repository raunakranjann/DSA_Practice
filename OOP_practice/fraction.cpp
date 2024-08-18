#include <iostream>
using namespace std;

class Fraction
{
public:
    int num;
    int den;
    Fraction(int num, int den)
    {
        this->num = num;
        this->den = den;
    }
    void display()
    {
        cout << num << " / " << den << endl;
    }
    // we can also use Fraction operator+(Fraction f){  
    
    Fraction add(Fraction f){
        int newNum = this->num*f.den + f.num*this->den;
    int newDen = this->den*f.den;
     Fraction ans{newNum,newDen};
     return ans;
    }
};
int main()
{
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.display();
    f2.display();
    Fraction f3 = f1.add(f2);
    f3.display();
}