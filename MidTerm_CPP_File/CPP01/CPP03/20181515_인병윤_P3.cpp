#include <iostream>
#include <string>
using namespace std;

class Stack {
	int *p;
	int size;
	int tos;
public:
	Stack() { 
		p = new int[3];
		tos = 0;
	}

	Stack& operator<<(int a) {
		if (tos < 3) {
			p[tos] = a;
			tos++;
			return *this;
		}
		else {
			cout << "NO" << endl;
		}
	}

	int operator>>(int &n) {
		if(tos > 0) {
			--tos;
			n = p[tos];

			return n;
		}
		else {
			cout << "Full" << endl;
		}
	}

	bool operator!() {
		if (tos == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;


	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
}