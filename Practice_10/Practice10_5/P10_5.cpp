#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int num;
	string id, password;
	string find,aa;
	map<string, string> str;
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;
	bool a = true;
	while (a) {
		cout << "���� : 1, �˻� :2, ���� :3 >>";
		cin >> num;
		switch (num) {
		case 1 :
			cout << "�̸� ��ȣ >>";
			cin >> id >> password;
			str.insert(make_pair(id, password));
			break;
		case 2:
			cout << "�̸�? ";
			cin >> find;
				while (true) {
					cout << "��ȣ? ";
					cin >> password;
					aa = str[find];
					if (password == aa) {
						cout << "���!" << endl;
						break;
					}
					else {
						cout << "����" << endl;
					}
				}
				break;
		case 3:
			cout << "���α׷��� �����մϴ�.";
			a = false;
		}
	}
}