#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand((unsigned)time(0));
	cout << "�Ʒ��� ������ �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
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