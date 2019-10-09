#include <iostream>
#include "Cal.h";
using namespace std;


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int num1, num2;
	char ch1;
	bool dd = true;
	while (dd) {
		cout << "두 정수와 연산자를 입력하세요 :";
		cin >> num1 >> num2 >> ch1;
		switch (ch1)
		{
		case '+':
			a.setValue(num1, num2);
			cout << a.calculate() << endl;
			break;
		case '-' :
			s.setValue(num1, num2);
			cout <<s.calculate() << endl;
			break;
		case '*' :
			m.setValue(num1, num2);
			cout << m.calculate() << endl;
			break;
		case '/' :
			d.setValue(num1, num2);
			cout << d.calculate() << endl;
			break;
		default:
			cout << "올바른 입력이 아닙니다." << endl;
			dd = false;
			break;
		}
	}
	
}