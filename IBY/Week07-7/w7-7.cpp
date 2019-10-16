#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "열기 오류" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << "열기 오류" << endl;
		return 0;
	}

	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}

	cout << srcFile << "을 " << destFile << "로 복사완료" << endl;
	fsrc.close();
	fdest.close()
}