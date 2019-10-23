#include <iostream>
#include <string>
using namespace std;

int main() {
	int size;
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇 명입니까?";
	cin >> size;
	string *p;
	p = new string[size];
	for (int i = 0; i < size; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
		cin >> p[i];
	}
	string start = "자부심";
	string com = start;
	string input;
	int i = 0;
	cout << "시작하는 단어는" << start << "입니다";
	cout << endl;
	while (1) {
		if (i < 3) {
			cout << p[i++] << ">>";
			cin >> input;
			int len = start.length();
			int len2 = com.length();
			if ((com.at(len2 - 2) == input.at(0)) && com.at(len2 - 1) == input.at(1)) {
				com.replace(0, len, input);
			}
			else {
				cout << "끝말잇기가 이어지지않습니다. 게임을 종료합니다." << endl;
				break;
			}
		}
		else {
			i = 0;
		}
		
		
	}
}