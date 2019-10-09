#include <iostream>
using namespace std;

class Stack {
	int *p;
	int count;
public:
	Stack() { p = new int[10]; count = -1; }
	~Stack() { delete[] p; }
	Stack& operator<<(int a);
	Stack& operator>>(int &b);
	bool operator!();
};

Stack& Stack::operator<<(int a) { //push
	++count;
	p[count] = a;

	return *this;
}

Stack& Stack::operator>>(int &b) { //pop
	b = p[count];
	--count;

	return *this;
}

bool Stack::operator!() {
	if (count == -1) return true;
	else return false;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;

	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}

	cout << endl;
}