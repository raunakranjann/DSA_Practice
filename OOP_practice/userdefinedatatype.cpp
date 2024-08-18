#include<iostream>
using namespace std;
class Student {
    //student is a new data type
    public:
    string name;
    int roll;
    float sgpa;
};
int main(){
    Student x;
    x.name= "Raunak ranjan";
    x.roll= 03;
    x.sgpa= 8;

     Student y;
    y.name= "Osama shakil";
    y.roll= 41;
    y.sgpa= 8.5;
    cout<< x.name<<" and "<< y.name <<endl;
}