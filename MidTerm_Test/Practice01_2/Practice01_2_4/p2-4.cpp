#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	while (1) {
		cout << "�����ϰ������ yes�� �Է��ϼ��� >>";
		getline(cin, a, '\n');
		
		if (a == "yes") {
			break;
		}
	}
	
}