#include <iostream>
#include <string>
using namespace std;

class Board {
public:
	static int num;
	static string *text;
	static int count;
	static void add(string a) {
		text[num] = a;
		++num;
	}

	static void print() {
		cout << "************�Խ����Դϴ�.***********" << endl;
		for (int i = 0; i < num; i++) {
			
			cout << i << " : " << text[i] << endl;
		}
	}
};

string *Board::text = new string[count];
int Board::num = 0;
int Board::count = 10;


int main() {
	Board::add("�߰����� �������� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}