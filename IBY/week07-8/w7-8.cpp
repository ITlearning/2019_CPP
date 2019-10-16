#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin) {
		cout << "파일 열기 오류";
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

	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}