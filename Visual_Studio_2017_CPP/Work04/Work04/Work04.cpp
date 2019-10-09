#include <iostream>
using namespace std;

int main() {
	int i, j;
	for (i = 1; i < 5; i++) {
		j = 0;
		for (; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}