#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "�������� " << radius << "�� ��" << endl; }
};

void increaseBy(Circle *a, Circle *b) {
	int r = a->getRadius() + b->getRadius();
	a->setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(&x, &y);
	x.show();
	y.show();
}