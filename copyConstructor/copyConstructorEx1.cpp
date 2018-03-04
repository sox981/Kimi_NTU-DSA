//learn copy constructor

#include <iostream>
#include <string>
using namespace std;

class copyConstructorEx1
{
	int data1, data2;
public:
	string string1;
	int *ptr;

	copyConstructorEx1(){
	};

	copyConstructorEx1( int d1, int d2, int p){
		ptr = new int;
		data1 = d1;
		data2 = d2;
		*ptr = p;

	};

	
	void display(){
		cout << "data1 = " << data1 << endl;
		cout << "data2 = " << data2 << endl;
		cout << "ptr = " << *ptr << endl;
	}
	
};

int main()
{
	copyConstructorEx1 object1(10, 20, 30);
	object1.display();
	object1.string1 = "obj1";
	cout << "object1.string1 is "<< object1.string1 << endl;

	copyConstructorEx1 object2 = object1; //called copy constructor
	// copyConstructorEx1 object2(object1); also called copy constructor
	// or 
	/* assignment operator do the copy
	copyConstructorEx1 object2;
	object2 = object1;
	*/
	cout << "Do copy constructor object2 = object1 " << endl;
	object2.display();
	cout << "object2.string1 is "<< object2.string1 << endl;

	*object2.ptr = 100; // obj2.ptr points to the same allocation as obj1.ptr
	object2.string1 = "obj2"; //string create a new copy, unlike pointer.
	object1.display();
	cout << "object1.string1 is "<< object1.string1 << endl;// unchanged
	cout << "object2.string1 is "<< object2.string1 << endl;// a new string copy

return 0;
}