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

	void operator+=(int a);
	void operator-=(int b);
};


void Book::operator += (int a) {
	price += a;
}

void Book::operator-=(int b) {
	price -= b;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}