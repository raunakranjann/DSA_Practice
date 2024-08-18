#include <iostream>
using namespace std;

    
int main()
{ 
    // int x= 1211;
    // int* ptr = &x;
// We can use this instead of the above codes without crearting the variable  

    int* ptr = new int(1211);
    cout<<*ptr<<endl;
 
}