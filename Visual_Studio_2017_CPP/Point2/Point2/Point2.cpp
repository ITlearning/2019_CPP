#include <iostream>

using namespace std;

int main() {
	int n[10];
	int i;
	int *p;

	for (i = 0; i < 10; i++)
		*(n + i) = i * 3; //배열의 이름 n을 주소처럼 사용가능.
						  // 배열n을 3의 배수로 채움.
	p = n; //포인터 p에 배열 n의 시작 주소를 설정한다.
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		*p = *p + 2;
		p++;
	}

	for (i = 0; i < 10; i++)
		cout << n[i] << ' ';
	cout << endl;
}