#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string s;
	cout << "���ڿ� �Է� >> ";
	getline(cin, s, '\n');

	/*for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'a') {
			count++;
		}
	}*/
	

	cout << "���� a��" << count << "�� �ֽ��ϴ�." << endl;
}