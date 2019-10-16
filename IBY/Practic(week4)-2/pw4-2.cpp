#include <iostream>
#include <cstring>
using namespace std;

char& find(char a[], char c, bool& success) {
	int i = 0;
	for (; i < strlen(a); i++) {
		if (c == a[i]) {
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
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}
