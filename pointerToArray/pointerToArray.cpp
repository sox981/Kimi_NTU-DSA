//Kimi, Hsieh 01/03/2018
//1. show array is a address.
//2. see Pointer to an Array
//3. https://www.tutorialspoint.com/cprogramming/c_pointer_to_an_array.htm
#include <iostream>
using namespace std;

int main()
{
    const int size = 3;
    int array[] = {40,50,60};
    int *arrayPtr = nullptr; 
    
    cout <<"array="<< array <<endl; // prove"array" is a address 
    cout <<"&array="<< &array <<endl; 
    for(int i = 0; i < size; i++){
        //cout<< i << endl;
        cout<<"array["<<i<<"] ="<< array[i]<<" &array["<<i<<"] = " << &array[i] << endl;
    }
    
    for(int i = 0; i < size; i++){
        //cout<< i << endl;
        cout<<"*(array+"<<i<<") ="<< *(array+i) << endl;
    }
    
    cout << endl << "arrayPtr = " <<arrayPtr <<endl;
    cout << "&arrayPtr = "<< &arrayPtr <<endl; 
    
    arrayPtr = array; //call "Pointer to an Array"
    
    cout <<endl<<"After arrayPtr = array :"<<endl<<endl;
    cout << "arrayPtr = " <<arrayPtr <<endl;
    cout << "&arrayPtr = " <<&arrayPtr <<endl;
    
    for(int i = 0; i < size; i++){
        //cout<< i << endl;
        cout<<"arrayPtr["<<i<<"] = "<< arrayPtr[i]<<" &arrayPtr["<<i<<"] = " << &arrayPtr[i] << endl;
    }
    
    cout <<endl<<"*arrayPtr = " <<*arrayPtr<<endl;
   
    return 0;
}