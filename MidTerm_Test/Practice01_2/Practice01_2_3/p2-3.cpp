#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string s2;
	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	cin >> s;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	cin >> s2;

	if (!s.compare(s2)) {
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "�ٸ��ϴ�." << endl;
	}
}