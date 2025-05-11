#include<iostream>

using namespace std;

class myClass {
	int a, b;
	int name;
public:

	myClass(int data) {
		a = 0;
		b = 0;
		name = data;
		cout << "constructor " << name << " is up!" << endl;
	}
	
	void show() {
		cout << "A: " << a << endl;
		cout << "B: " << b << endl;
	}

	~myClass() {


		cout << "Deconstructor " << name << " is up!" << endl;
	}
	
};

void Foo() {
	cout << "Foo is started" << endl;

	myClass a(1);
	myClass b(2);

	cout << "Foo is ended" << endl;
}

int main() {

	Foo();

	return 0;
}