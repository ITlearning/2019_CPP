#include <iostream>
#include <string>
using namespace std;

void RSP(string r, string j) {
	if ((r == "����" && j == "��") || (r == "����" && j == "����") || (r == "��" && j == "����")) {
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else if ((r == "��" && j == "����") || (r == "����" && j == "����") || (r == "����" && j == "��")){
		cout << "�ٸ����� �̰���ϴ�." << endl;
	}
	else if (r == j) {
		cout << "�����ϴ�." <<endl;
	}
}

int main() {
	string r;
	string j;
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	cout << "�ι̿� >> ";
	cin >> r;
	cout << "�ٸ��� >> ";
	cin >> j;

	RSP(r, j);
}