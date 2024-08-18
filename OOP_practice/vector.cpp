#include <iostream>
using namespace std;

// Class starts from here 
class Vector
{
public:         // access modifier
    int size;
    int capacity;
    int *arr;

    // here vector function starts 
    // this is the constructor i.e. default constructor 
    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    // this function doubles the size of array when it gets full 

    void add(int element){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = element;
        size++;
    }


    // this function prints the elements of the array

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

    // this function helps to get the specific element of array 

    int get(int index){
        if(size==0){
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        if(index>= size || index<0){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        return arr[index];
    
    }
    // this function removes the element of array from the end 

    void remove(){
        if(size==0){
            cout<<"Array is Empty"<<endl;
          
        }
        size--;
    }
};


// here main function starts 
int main()
{
    Vector v;
    v.add(10);
    v.print();      //10
    v.add(12);
    v.add(323);
    v.remove();
    v.print();      //10 12 323

    cout<<v.get(2)<<endl;

}