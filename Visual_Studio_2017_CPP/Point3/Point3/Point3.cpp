#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size);

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 1,2,3,4,5 };

	if (equalArray(a, b, 5)) cout << "arrays equal " << endl;
	else cout << "arrays not equal " << endl;
}

bool equalArray(int* p, int* q, int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (*p != *q) return false;
		p++;
		q++;
	}
	return true;
}