#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string s;
	cout << "문자열 입력 >> ";
	getline(cin, s, '\n');

	/*for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'a') {
			count++;
		}
	}*/
	

	cout << "문자 a는" << count << "개 있습니다." << endl;
}