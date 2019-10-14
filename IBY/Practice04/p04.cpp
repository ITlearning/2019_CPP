#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand((unsigned)time(0));
	cout << "아래에 한줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		string text;
		
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit") {
			return 0;
		}

		int random = rand() % (text.length() + 1);
		if (random == 0) {
			int balpha = rand() % (90 - 65 + 1) + 65;
			text[0] = (char)balpha;
		}
		else {
			int salpha = rand() % (122 - 97 + 1) + 97;
			text[random] = (char)salpha;
		}
		
		cout << text << endl;

	}
}