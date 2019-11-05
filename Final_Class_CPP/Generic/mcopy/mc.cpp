#include <iostream>
using namespace std;

template <class T1, class T2 >
void mcopy(T1 src[], T2 dest[], int b) {
	for (int i = 0; i < b; i++)
		dest[i] = (T2)src[i];
}

int main() {
	double x[] = { 1.3,2.5,3.3,4.4,5.5};
	int d[5];
	char c[5] = { 1, 2, 3,4,5 }, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);

	for (int i = 0; i < 5; i++) cout << d[i] << ' ';
	cout << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << ' ';
	cout << endl;
}