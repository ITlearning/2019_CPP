#include <iostream>

using namespace std;

int g = 20; //���� ����

int add(int x, int y) { //���� �Լ�
	return x + y;
}

int main() {
	int a, b, sum; //���� ����
	cout << "�� ������ �Է��� �ּ��� : ";
	cin >> a >> b;
	sum = a + b;
	
	cout << "���� " << sum << "�Դϴ�." << endl;
	cout << "���� " << add(a, b) << "�Դϴ�." << endl;
	cout << "���� ���� G�� ���� " << g << endl;
	return 0;

}