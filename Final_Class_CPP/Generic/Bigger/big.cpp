#include <iostream>
using namespace std;

template <class T>

T bigger(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a = 20, b = 39;
	char c = 'a', d = 'z';

	cout << "bigger(20,39)�� �����" << bigger(a, b) << endl;
	cout << "bigger(a,z)�� �����" << bigger(c, d) << endl;
}