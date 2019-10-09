//while문과 continue ,break문을 이용하여,
//정수를 입력받고 3의 배수이면 "Yes"
//아니면 "No"를 출력하라
//0을 입력하면 프로그램을 종료한다.

#include <iostream>
using namespace std;

int main() {
	int a;
	
	while (true) {
		cout << "정수를 입력하라 :";
		cin >> a;
		if (a % 3 != 0) {
			cout << "No" << endl;
			continue;
		}

		if (a == 0) {
			cout << "종료" << endl;
			break;
		}
		cout << "Yes" << endl;
	}

}