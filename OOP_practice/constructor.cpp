#include <iostream>
using namespace std;

    class Student{
        public:
        string name;
        int rno;
        float gpa;

    Student(){
        // Default constructor
    }

    // parameterised constructor 
        Student(string s, int r,float g){
name = s;
rno = r;
gpa = g;
        }




    };
int main()
{
    Student s1("Raunak ranjan",03, 8.1);
    cout<<s1.name<<" "<< s1.gpa<<" "<< endl;


     Student s2 = s1;  //  Deep copy 
    s2.name = "Osama shakil";
    s2.rno = 41 ; 
     cout<<s2.name<<" "<< s2.gpa<<" "<<s2.rno<< endl;

     Student s3(s2);  // Copy constructor
     s3.gpa = 7.31 ; 
     cout<<s3.name<<" "<< s3.gpa<<" "<<s3.rno<< endl;
}