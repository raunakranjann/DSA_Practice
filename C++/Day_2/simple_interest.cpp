// raunakranjann
// Question 3 : Build a Simple Interest Calculator. 
// Input : principal (P), rate (R), time (T) Output : 
// (P*R*T) / 100 
 
 #include <iostream>
 using namespace std;
 
    
 int main()
 {
    float P, R, T;
    cout<<"Enter the principal amount : "<<endl;
    cin>>P;
    cout<<"Enter the rate : "<<endl;
    cin>>R;
    cout<<"Enter the time : "<<endl;
    cin>>T;
    float SI;
    SI = (P*R*T)/100;
    cout<<"The simple interest calculated is "<<SI<<endl;
    return 0;
 }