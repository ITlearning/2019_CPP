#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int *p;

	for (int i = 0; i < 10; i++) {
		*(n + i) = i * 3;
		// �迭�� �̸��� �ּ�ó�� ��밡�� �迭 n�� 3�� ����� ä��.
	}

	p = n; 
	//������ p�� �迭 n�� �����ּҸ� ����.
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
		//������ p�� �̿��Ͽ� �迭 n ���.
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		*p = *p + 2;
		//������ p�� �̿��Ͽ� �迭�� ���� ���� 2����
		p++;
		//p�� ���������� �ּҷ� ����.
	}

	for (int i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}