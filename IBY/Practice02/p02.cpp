#include <iostream>
#include <string>

using namespace std;

//int main() {
//	string text;
//	int count = 0;
//	cout << "���ڿ� �Է� : ";
//	getline(cin, text, '\n');
//
//	for (int i = 0; i < text.length(); i++) {
//		if(text.at(i) == 'a') {
//			count++;
//		}
//	}
//
//	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
//}

int main() {
	string text;
	int count = 0;
	int index = -1;
	cout << "���ڿ� �Է� :";
	getline(cin, text, '\n');

	do {
		index = text.find('a', index + 1);
		if (index != -1) {
			count++;
		}
	} while (index != -1);

	cout << "���� a �� " << count << "�� �ֽ��ϴ�." << endl;
}