#include <iostream>
#include <string>
using namespace std;

int main() {
	int size;
	cout << "���� �ձ� ������ �����մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� �� ���Դϱ�?";
	cin >> size;
	string *p;
	p = new string[size];
	for (int i = 0; i < size; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ����>>";
		cin >> p[i];
	}
	string start = "�ںν�";
	string com = start;
	string input;
	int i = 0;
	cout << "�����ϴ� �ܾ��" << start << "�Դϴ�";
	cout << endl;
	while (1) {
		if (i < 3) {
			cout << p[i++] << ">>";
			cin >> input;
			int len = start.length();
			int len2 = com.length();
			if ((com.at(len2 - 2) == input.at(0)) && com.at(len2 - 1) == input.at(1)) {
				com.replace(0, len, input);
			}
			else {
				cout << "�����ձⰡ �̾������ʽ��ϴ�. ������ �����մϴ�." << endl;
				break;
			}
		}
		else {
			i = 0;
		}
		
		
	}
}