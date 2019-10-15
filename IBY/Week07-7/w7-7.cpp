#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "���� ����" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << "���� ����" << endl;
		return 0;
	}

	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}

	cout << srcFile << "�� " << destFile << "�� ����Ϸ�" << endl;
	fsrc.close();
	fdest.close()
}