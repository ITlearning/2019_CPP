#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int num;
	string id, password;
	string find,aa;
	map<string, string> str;
	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
	bool a = true;
	while (a) {
		cout << "삽입 : 1, 검사 :2, 종료 :3 >>";
		cin >> num;
		switch (num) {
		case 1 :
			cout << "이름 암호 >>";
			cin >> id >> password;
			str.insert(make_pair(id, password));
			break;
		case 2:
			cout << "이름? ";
			cin >> find;
				while (true) {
					cout << "암호? ";
					cin >> password;
					aa = str[find];
					if (password == aa) {
						cout << "통과!" << endl;
						break;
					}
					else {
						cout << "실패" << endl;
					}
				}
				break;
		case 3:
			cout << "프로그램을 종료합니다.";
			a = false;
		}
	}
}