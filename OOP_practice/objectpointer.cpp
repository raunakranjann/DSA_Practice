#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
   
    print(){
        cout<< this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
}; 
void change(Cricketer* c){
    // (*c).avg = 489.2;
        c->avg = 68.9;

        // here (*c).  is can be written as c-> (both the meanings will be same)
    }
int main()
{
    
    // int x = 4;
    // cout << &x << endl;
    // int *p = &x;
    // cout << *p << endl;
    // *p = 100;
    // cout << x << endl;

    Cricketer c1("Virat kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma",18000, 47.8);
    cout<<c1.avg<<endl;
      change(&c1);
         cout<<c1.avg<<endl;
    // Cricketer* p1 = &c1;

    // (*p1).avg = 38.3;
  
  
    c1.print();
}