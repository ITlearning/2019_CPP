#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "持失切 A" << endl; }
	A(int x) { cout << "持失切 A" << x << endl; }
	~A() { cout << "社瑚切 A" << endl; }
};

class B : public A {
public:
	B() { cout << "持失切 B" << endl; }
	B(int x) : A(x + 4) { cout << "持失切 B" << x <<  endl; }
	~B() { cout << "社瑚切 B" << endl; }
};

class C : public B {
public:
	C() { cout << "持失切 C" << endl; }
	C(int x) : B(x + 5) { cout << "持失切 C" << x << endl; }
	~C() { cout << "社瑚切 C" << endl; }
};

int main() {
	C c(5);

	return 0;
}