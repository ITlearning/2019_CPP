#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "������ A" << endl; }
	A(int x) { cout << "������ A" << x << endl; }
	~A() { cout << "�Ҹ��� A" << endl; }
};

class B : public A {
public:
	B() { cout << "������ B" << endl; }
	B(int x) : A(x + 4) { cout << "������ B" << x <<  endl; }
	~B() { cout << "�Ҹ��� B" << endl; }
};

class C : public B {
public:
	C() { cout << "������ C" << endl; }
	C(int x) : B(x + 5) { cout << "������ C" << x << endl; }
	~C() { cout << "�Ҹ��� C" << endl; }
};

int main() {
	C c(5);

	return 0;
}