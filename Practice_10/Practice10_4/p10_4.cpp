#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int a;
	int i = 0;
	double plus = 0;
	double sum = 0;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >>";
		cin >> a;
		if (a == 0) {
			break;
		}
		v.push_back(a);
		i = 0;
		for (; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << endl;
			plus += a;
			sum = plus / v.size();
		cout << "��� : " << sum << endl;
	}
	
}