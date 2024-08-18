#include <iostream>
using namespace std;
// there are three types of access modifier 
// public 

// private 

// and protected 

    class Student{
        public:         // access modifier
        int rno;
        string name;
        Student(int rno, string name, float marks){
            this->rno = rno;
            this->name = name;
            this->marks = marks;

        }void display(){
            cout<<name<<" "<<marks<<" "<<rno<<endl;

        }
        float getMarks(){
            return marks;   //getter 
        }
        void setMarks(float marks){
this->marks = marks;
        }
        private:           //access modifier
        float marks;
        
    };
int main()
{
    // Student s2;
    // s2.rno = 03;
    // s2.name = "Raunak ranjan";
    // s2.marks = 82.8;
    // // s1.display();

    Student s1(83, "Osama shakil",89.9);
   
  
  cout<<s1.getMarks()<<endl; 
  s1.setMarks(45.3);
   s1.display();
}