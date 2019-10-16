#include <iostream>
using namespace std;

int main() {
	int k = 1;
	int j = 1;
	for (int i = 1; i <10; i++) {
		j = 1;
		for (; j < 10; j++) {
			cout <<i << "x" << j << "=" << i*j << "\t";
		}
		cout << endl;
	}
}