#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	string v;

	cout << "�� ��ȣ�� �Է��ϼ��� :";
	cin >> s;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� :";
	cin >> v;

	if (s == v) {
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "���� �ʽ��ϴ�." << endl;
	}
}