#include <iostream>

using namespace std;

int g = 20; //전역 변수

int add(int x, int y) { //전역 함수
	return x + y;
}

int main() {
	int a, b, sum; //지역 변수
	cout << "두 정수를 입력해 주세요 : ";
	cin >> a >> b;
	sum = a + b;
	
	cout << "합은 " << sum << "입니다." << endl;
	cout << "합은 " << add(a, b) << "입니다." << endl;
	cout << "전역 변수 G의 값은 " << g << endl;
	return 0;

}