#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	cout << "�̸� >>";
	cin >> name;
	cout << "�й� >>";
	cin >> sid;
	cout << "�а� >>";
	cin >> dept;

	ofstream fout("C:\\temp\\student.txt");
	if (!fout) {
		cout << "������ �� �� ����.";
		return 0;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}