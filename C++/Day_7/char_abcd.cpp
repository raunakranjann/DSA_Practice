// Question 5 : Write a function that accepts a character (ch) as parameters 
// & returns the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include <iostream>
using namespace std;

    char input(char letter){
        int a = letter;
        
        char output = a+1;
        if(a == 122){
            output = 'a';               //Here the ASCII value of  z is 122 
        }
        return output;
    }
int main()
{
    char enter;
    cout<<"Enter a character : "<<endl;
    cin>>enter;
    cout<<"The required output is "<<input(enter)<<endl;
    return 0;
}