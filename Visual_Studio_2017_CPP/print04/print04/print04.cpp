#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	string v;

	cout << "새 암호를 입력하세요 :";
	cin >> s;
	cout << "새 암호를 다시 한 번 입력하세요 :";
	cin >> v;

	if (s == v) {
		cout << "같습니다." << endl;
	}
	else {
		cout << "같지 않습니다." << endl;
	}
}