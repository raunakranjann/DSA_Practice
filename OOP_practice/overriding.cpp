#include <iostream>
#include<vector>
using namespace std;
    class Scooty{
        public: 
        int topSpeed;
        float mileage;

   virtual void sound(){
        cout<<"Vroom vroom"<<endl;
    }
private:
int bootSpace;
    };
    class Bike : public Scooty{
        public:
        int gears;
 void sound(){
        cout<<"dhoom dhoom"<<endl;
    }
    };
 class SuperBike : public Scooty{
        public:
       
 void sound(){
        cout<<"zroom zroom"<<endl;
    }
    };

int main()
{
   Bike* b= new Bike();     //Object pointer
   b-> sound();
//    b->gears = 5;
//    cout<<b->gears;
   Scooty* s = new Scooty();
   s->sound();
Scooty* c= new SuperBike();
c->sound();
   vector<Scooty*> v;
}