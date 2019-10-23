#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string s2;
	cout << "새 암호를 입력하세요 >> ";
	cin >> s;
	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	cin >> s2;

	if (!s.compare(s2)) {
		cout << "같습니다." << endl;
	}
	else {
		cout << "다릅니다." << endl;
	}
}