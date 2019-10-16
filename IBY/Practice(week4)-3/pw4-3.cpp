#include <iostream>
#include <cstring>

using namespace std;

class MyInstack {
	int p[10];
	int tos;
public :
	MyInstack();
	bool push(int n);
	bool pop(int &n);
};

MyInstack::MyInstack() {
	tos = -1;
}
bool MyInstack::push(int n) {
	if (n == 10) {
		return false;
	}
	else {
		p[++tos] = n;
		return true;
	}
}

bool MyInstack::pop(int &n) {
	if (tos == -1) {
		return false;
	}
	else {
		n = p[tos--];
		return true;
	}
}

int main() {
	MyInstack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;

	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";

	}

	cout << endl;
	
}