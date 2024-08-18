#include <iostream>
using namespace std;

    class Vehicle{       //parent class
        public:
        int topspeed;
        float mileage;
        string fuel;
    private:
    int bootSpace;
    };
    class Car :public Vehicle{     //child class or derived class
        public:
        bool sunroof; 
    };
    class Bike : public Vehicle{

    };
    class Truck : public Vehicle{
public:
    };
int main()
{
    Car b1;
    b1.topspeed = 100;
    b1.mileage = 12.5;
   b1.fuel= "compressed natural gas";
   
    cout<<"Top Speed :"<< b1.topspeed<<" "<<b1.mileage<<" "<<b1.fuel<<endl;
   
}