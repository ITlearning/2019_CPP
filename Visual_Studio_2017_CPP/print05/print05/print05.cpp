#include <iostream>
#include <string>
using namespace std;

int main() {
	char answer[50];
	while (1) {
		cout << "종료하고 싶으면 yes를 입력하세요 :";
		cin.getline(answer, 50, '\n');
		if ("yes" == answer) {
			break;
		}
	}
}