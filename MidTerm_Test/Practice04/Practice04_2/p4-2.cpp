#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int size = strlen(a);
	for (int i = 0; i < size; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}

	loc = 'm';
	cout << s << endl;
}