#include <iostream>

using namespace std;

int main() {
	int score;
	cout << "������ �Է��ϼ��� :";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "�ùٸ� ������ �Է����ּ���(0 ~ 100)";
		return 0;
	}

	if (score >= 90) {
		cout << "A";
	}
	else if (score >= 80) {
		cout << "B";
	}
	else if (score >= 70) {
		cout << "C";
	}
	else if (score >= 60) {
		cout << 'D';
	}
	else
		cout << 'F';
}