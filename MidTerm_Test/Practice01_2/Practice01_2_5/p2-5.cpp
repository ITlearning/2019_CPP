#include <iostream>
#include <string>
using namespace std;
int main() {
	int a = 0;
	string p[5];
	cout << "5명의 이름을 ;으로 구분하여 입력하세요" << endl;
	cout << ">>";
	for (int i = 0; i < 5; i++) {
		getline(cin, p[i], ';');
	}

	for (int i = 0; i < 5; i++) {
		cout << i + 1 <<" : "<< p[i] << endl;
	}

	int size = 0;
	for (int i = 0; i < 5; i++) {
		if (p[i].size() > size) {
			size = p[i].size();
			a = i;
		}

	}
	
	cout << "가장 긴 이름은" << p[a] << "입니다." << endl;

}