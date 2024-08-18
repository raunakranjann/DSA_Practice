#include <iostream>
using namespace std;

    class Cricketer{
        public:
        string name;
        int runs;
        Cricketer(string name, int runs){
            // this keyword is use when the name of the variable and parameter of a 
            // function is same ((in a constructor))
            this->name = name;
            this->runs = runs;
        }

        void print(){
              cout <<this->name <<" "<<this->runs <<" "<<endl;
        }
    };

int main()
{
  Cricketer c1("Virat kohli",25000);
  Cricketer c2("Rohit sharma",18000);
  
    c1.name = "Raunak";
    c1.print();
    c2.name = "Osama";
    cout << c2.name <<" "<<c2.runs <<" "<<endl;
}