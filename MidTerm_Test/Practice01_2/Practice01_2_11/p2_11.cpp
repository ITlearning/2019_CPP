#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[50];
	char* b;
	char s[3];
	int n1, n2;
	while (1) {
		cout << "? ";
		cin.getline(a, '\n');
		b = strtok(a, " ");
		int i = 0;
		while (b != NULL) {
			b = strtok(NULL, " ");
			s[i++] = stoi(b);
		}

		n1 = stoi(s[0]);
		n2 = stoi(s[2]);

		if (s[1] == "+") {
			cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
		}
		else if (s[1] == "-") {
			cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
		}
		else if (s[1] == "*") {
			cout << n1 << " * " << n2 << " = " << n1 + n2 << endl;
		}
		else if (s[1] == "/") {
			cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
		}
		else if (s[1] == "%") {
			cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
		}
	}
	
	
}