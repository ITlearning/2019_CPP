#include <iostream>

using namespace std;

// �ΰ��� ������ �޾� ū ���� �����ϴ� �Լ�
int bigger(int a, int b) {
	if (a > b) return a;
	else return b;
}

// �Ű� ������ 3���� ���������� true, �ƴϸ� false �� ����
bool dividedBy3(int n) {
	if (n % 3 == 0) return true;
	else return false;
}

int main() {
	int a, b, n;
	cout << "�� ���� ���� �Է� :";
	cin >> a >> b;
	n = bigger(a, b);
	cout << a << "�� " << b << " �� ū ���� " << n << "�Դϴ�. " << endl;

	if (dividedBy3(n)) {
		cout << n << "�� " << "3�� ����Դϴ�. " << endl;
	}
	else {
		cout << n << "�� " << "3�� ����� �ƴմϴ�. " << endl;
	}
}