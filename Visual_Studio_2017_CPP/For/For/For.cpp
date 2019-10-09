// a애서 b 까지의 정수 합을 출력하는 프로그램

#include <iostream>

using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수 입력 : ";
	cin >> a >> b;

	for (i = a; i <= b; i++) {
		sum += i;
	}

	cout << a << "에서 " << b << "까지 합은 " << sum;
}