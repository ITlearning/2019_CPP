#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string ss[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k",
					"l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
					"w", "x", "y", "z" };
	string s;
	srand((unsigned)time(0));

	while (1) {
		
		cout << "�Ʒ��� ������ �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit") break;

		int a = rand() % s.size();

		while (!isalpha(s.at(a))) a = rand() % s.size();
		int b = rand() % 26;

		s.replace(a, 1, ss[b]);
		cout << s << endl;


	}
	
}