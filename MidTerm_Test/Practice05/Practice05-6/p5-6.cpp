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
	void show() { cout << title << ' ' << price << "�� " << pages << " ������" << endl; }

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
	Book book("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է����ּ��� >>";
	getline(cin, b);
	if (b < book) cout << book.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	else cout << book.getTitle() << "�� " << b << "���� �տ� �ֱ���!" << endl;
}