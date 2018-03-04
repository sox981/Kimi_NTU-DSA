#include <iostream>
using namespace std;
const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX]; // ptr is an array[MAX] of pointer to char
 
   for (int i = 0; i < MAX; i++) {
      cout << "&var["<<i<<"]" <<" = " <<&var[i] << endl;
      cout << "&ptr["<<i<<"]" <<" = " <<&ptr[i] << endl;
      ptr[i] = &var[i]; // assign the address of integer.
      cout << "ptr["<<i<<"]" <<" = " <<ptr[i] << endl;

   }
   
   for (int i = 0; i < MAX; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
   
   return 0;
}