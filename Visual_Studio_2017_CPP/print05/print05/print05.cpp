#include <iostream>
#include <string>
using namespace std;

int main() {
	char answer[50];
	while (1) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� :";
		cin.getline(answer, 50, '\n');
		if ("yes" == answer) {
			break;
		}
	}
}