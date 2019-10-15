#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* firstFile = "c:\\temp\\student.txt";
	const char* secondFile = "c:\\windows\\system.ini";

	fstream fout(firstFile, ios::out | ios::app);
	if (!fout) {
		cout << firstFile << "열기 오류";
		return 0;
	}
	
	fstream fin(secondFile, ios::in);
	if (!fin) {
		cout << secondFile << "열기 오류";
		return 0;
	}

	int c;
	while ((c = fin.get()) != EOF) {
		fout.put(c);
	}

	ifstream fin2(firstFile);

	int a;
	while ((a = fin2.get()) != EOF) {
		cout << char(a);
	}
	fin.close();
	fout.close();
}