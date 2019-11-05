#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};

template <class T>

void myswap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4; 
	int b = 5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle dount(5), pizza(30);
	myswap(dount, pizza);
	cout << "dount 반지름" << dount.getRadius() << ", ";
	cout << "pizza 반지름" << pizza.getRadius() << endl;
}