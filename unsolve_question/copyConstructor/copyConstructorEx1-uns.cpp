#include <iostream>
//#include <string>
using namespace std;

class copyConstructorEx1
{
	int data1, data2, *ptr;
	//string string1;
public:
	copyConstructorEx1(){
		ptr = new int;
	};
	copyConstructorEx1( int d1, int d2, int p){
		data1 = d1;
		data2 = d2;
		ptr = &p; //show ptr = 32767
		//cout << "ptr = " << *ptr << endl;
		//after above line, "ptr = 30", why?

	};

	
	void display(){
		cout << "data1 = " << data1 << endl;
		cout << "data2 = " << data2 << endl;
		//cout << "string1 = " << string1 << endl;
		cout << "ptr = " << *ptr << endl;
	}
	
};

int main()
{
	copyConstructorEx1 object1(10, 20, 30);
	object1.display();

return 0;
}