#include <iostream>
using namespace std;

class Book {
	char *title;	//���� ���ڿ�
	int price;		// ����
public:
	Book(const char* title, int price);
	~Book();
	Book(Book &a);
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
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
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}