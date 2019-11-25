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
		cout << "************게시판입니다.***********" << endl;
		for (int i = 0; i < num; i++) {
			
			cout << i << " : " << text[i] << endl;
		}
	}
};

string *Board::text = new string[count];
int Board::num = 0;
int Board::count = 10;


int main() {
	Board::add("중간고사는 감독없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}