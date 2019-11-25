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

	friend bool operator==(Book a, int b);
	friend bool operator==(Book a, string s);
	friend bool operator==(Book a, Book c);
};

bool operator==(Book a, int b) {
	if (a.price == b) return true;
	else return false;
}

bool operator==(Book a, string s) {
	if (a.title == s) return true;
	else return false;
}

bool operator==(Book a, Book c) {
	if (a.title == c.title && a.price == c.price && a.pages == c.pages) return true;
	else return false;
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}