//while���� continue ,break���� �̿��Ͽ�,
//������ �Է¹ް� 3�� ����̸� "Yes"
//�ƴϸ� "No"�� ����϶�
//0�� �Է��ϸ� ���α׷��� �����Ѵ�.

#include <iostream>
using namespace std;

int main() {
	int a;
	
	while (true) {
		cout << "������ �Է��϶� :";
		cin >> a;
		if (a % 3 != 0) {
			cout << "No" << endl;
			continue;
		}

		if (a == 0) {
			cout << "����" << endl;
			break;
		}
		cout << "Yes" << endl;
	}

}