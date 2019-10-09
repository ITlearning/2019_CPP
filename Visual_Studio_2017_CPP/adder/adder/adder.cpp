#include <iostream>
using namespace std;

int adder(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

int main() {
	int n = adder(24567, 98374);
	cout << "24567 과 98374의 합은 " << n << "입니다 " << endl;

	int a, b;
	cout << "두개의 정수를 입력하세요 :";
	cin >> a >> b;
	n = adder(a, b);
	cout << a << "와" << b << "의 합은 " << n << "입니다 " << endl;
}