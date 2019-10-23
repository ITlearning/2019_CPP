#include <iostream>
using namespace std;

class Book {
	char *title;	//제목 문자열
	int price;		// 가격
public:
	Book(const char* title, int price);
	~Book();
	Book(Book &a);
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}

Book::~Book() {
	delete[] title;
}

void Book::set(const char* title, int price) {
	this->price = price;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}