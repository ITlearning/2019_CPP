#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin) {
		cout << "���� ���� ����";
		return 0;
	}

	int count = 0;
	char s[32];
	while (!fin.eof()) {
		fin.read(s, 32);
		int n = fin.gcount();
		cout.write(s, n);
		count += n;
	}

	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}