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
		cout << "정수를 입력하세요(0을 입력하면 종료) >>";
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
		cout << "평균 : " << sum << endl;
	}
	
}