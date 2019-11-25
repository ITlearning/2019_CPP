#include <iostream>
#include <string>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() { cout << title << ' ' << price << "원 " << pages << " 페이지" << endl; }

	string getTitle() { return title; }

	friend bool operator<(string s,Book a);
};

bool operator<(string s, Book a) {
	if (s < a.title ) {
		return true;
	}
	else return false;
}

int main() {
	Book book("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력해주세요 >>";
	getline(cin, b);
	if (b < book) cout << book.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	else cout << book.getTitle() << "이 " << b << "보다 앞에 있구나!" << endl;
}