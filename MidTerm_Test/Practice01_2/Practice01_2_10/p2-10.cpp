#include <iostream>
using namespace std;

int main() {
	char coffee[100];
	int a;
	int result = 0;
	int price;
	cout << "에스프레소 2000원 , 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	for(int i = 0; i< 3; i++) {
		price = 0;
		cout << "주문 >> ";
		cin >> coffee >> a;

		if (strcmp(coffee, "에스프레소") == 0){
			price = 2000 * a;
			result += price;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			price = 2300 * a;
			result += price;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			price = 2500 * a;
			result += price;
		}

		cout << price << "입니다." << endl;
	}

	cout << "오늘 " << result << "원을 판매하여 카페를 닫습니다." << endl;
}