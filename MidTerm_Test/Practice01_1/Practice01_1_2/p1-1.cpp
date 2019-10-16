#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}