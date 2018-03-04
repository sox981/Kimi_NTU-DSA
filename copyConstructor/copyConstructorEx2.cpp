//learn how to do copy constructor manually

#include <iostream>
using namespace std;

class copyConstructorEx2
{
	int data1, data2;
public:
	int *ptr;

	copyConstructorEx2(){
	};

	copyConstructorEx2( int d1, int d2, int p){
		ptr = new int;
		data1 = d1;
		data2 = d2;
		*ptr = p;

	};
	// create copy constructor manually
	copyConstructorEx2( copyConstructorEx2 &cp){
		this->ptr = new int;
		this->data1 = cp.data1;
		this->data2 = cp.data2;
		*(this->ptr) = *(cp.ptr);
	};

	void display(){
		cout << "data1 = " << data1 << " ";
		cout << "data2 = " << data2 << " ";
		cout << "ptr = " << *ptr << endl;
	}	
};

int main()
{
	copyConstructorEx2 object1(10, 20, 30);
	object1.display();
	
	copyConstructorEx2 object2(object1); //called copy constructor (manually)
	//copyConstructorEx2 object2 = object1; 
	/* assignment operator do the copy
	copyConstructorEx1 object2;
	object2 = object1;
	*/
	
	cout << "Do copy constructor object2 = object1 " << endl;
	cout << "object2 : ";
	object2.display();

	*object2.ptr = 100; //obj2.ptr points to new allocation, not the same as obj1.ptr
	cout << "change object2.ptr = 100" << endl;
	cout << "object1 : ";
	object1.display();
	cout << "object2 : ";
	object2.display();

return 0;
}