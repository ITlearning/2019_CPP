#include <iostream>
using namespace std;

class Person {
public:
	double money;
	void addMoney(int money) { //���� ��
		this->money += money;
	}

	static int sharedMoney; //����
	static void addShared(int n) {
		sharedMoney += n;
	}
};

// static ���� ����. ����(global) ������ ����
int Person::sharedMoney = 10; // 10���� �ʱ�ȭ

int main() {
	Person han;
	han.money = 100; //han�� ���� �� = 100
	han.sharedMoney = 200; //���� = 200

	Person lee;
	lee.money = 150; //lee�� ���� �� = 150
	lee.addMoney(200); // lee�� ���� �� += 200
	lee.addShared(200); // ���� �߰� += 200 ���� ���� 400

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}