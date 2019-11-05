#include <iostream>
using namespace std;

template<class F>
bool search(F a, F b[], int c) {
	for (int i = 0; i < c; i++) {
		if (b[i] == a) {
			return true;
		}
	}
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다.";
	else cout << "100이 배열 x에 포함되어 있지 않다.";
}