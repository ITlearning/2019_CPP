#include <iostream>
using namespace std;

int main() {
	int i, j, sum = 1;
	for (i = 0; i < 10; i++) {
		j = 0;
		for (; j < 10; j++) {
			cout << sum++ << "\t";
		}
		cout << endl;
	}
}