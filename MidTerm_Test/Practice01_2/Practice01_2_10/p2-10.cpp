#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int a;
	int result = 0;
	int price;
	cout << "���������� 2000�� , �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	for(int i = 0; i< 3; i++) {
		price = 0;
		cout << "�ֹ� >> ";
		cin >> coffee >> a;

		if (strcmp(coffee, "����������") == 0){
			price = 2000 * a;
			result += price;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			price = 2300 * a;
			result += price;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			price = 2500 * a;
			result += price;
		}

		cout << price << "�Դϴ�." << endl;
	}

	cout << "���� " << result << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�." << endl;
}