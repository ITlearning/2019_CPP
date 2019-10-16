#include <iostream>
using namespace std;

class MyIntStack {
	int *p;
	int size;
	int tos = -1;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int &n);
};

MyIntStack::MyIntStack() {
}

MyIntStack::MyIntStack(int size) {
	this->size = size;
	p = new int[size];
}

MyIntStack::MyIntStack(MyIntStack& s) {
	size = s.size;
	p = new int[s.size];
	/*for (int i = 0; i < s.size; i++) {
		p[i] = s.p[i];
	}*/
}

MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {
	if (tos == size) {
		return false;
	}
	else {
		p[++tos] = n;
		return true;
	}
}

bool MyIntStack::pop(int &n) {
	if (tos == -1) {
		return false;
	}
	else {
		n = p[tos--];
		return true;
	}
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b(a);
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}