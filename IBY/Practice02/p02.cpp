#include <iostream>
#include <string>

using namespace std;

//int main() {
//	string text;
//	int count = 0;
//	cout << "문자열 입력 : ";
//	getline(cin, text, '\n');
//
//	for (int i = 0; i < text.length(); i++) {
//		if(text.at(i) == 'a') {
//			count++;
//		}
//	}
//
//	cout << "문자 a는 " << count << "개 있습니다.";
//}

int main() {
	string text;
	int count = 0;
	int index = -1;
	cout << "문자열 입력 :";
	getline(cin, text, '\n');

	do {
		index = text.find('a', index + 1);
		if (index != -1) {
			count++;
		}
	} while (index != -1);

	cout << "문자 a 는 " << count << "개 있습니다." << endl;
}