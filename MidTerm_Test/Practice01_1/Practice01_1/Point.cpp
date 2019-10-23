#include <iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int *p;

	for (int i = 0; i < 10; i++) {
		*(n + i) = i * 3;
		// 배열의 이름을 주소처럼 사용가능 배열 n을 3의 배수로 채움.
	}

	p = n; 
	//포인터 p에 배열 n의 시작주소를 설정.
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
		//포인터 p를 이용하여 배열 n 출력.
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
		*p = *p + 2;
		//포인터 p를 이용하여 배열의 원소 값을 2증가
		p++;
		//p는 다음원소의 주소로 증가.
	}

	for (int i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << endl;
}