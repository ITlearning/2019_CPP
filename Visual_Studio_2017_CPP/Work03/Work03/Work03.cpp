#include <iostream>
#include <string>
using namespace std;
class Color {
	string c;
public :
	Color() { c = "white"; cout << "�⺻������" << endl; }
	Color(string c) { this->c = c; cout << "�Ű�����������" << endl; }
	~Color() { cout << "�Ҹ���" << endl; }
};

class Palatte {
	Color *p;
public :
	Palatte() { p = new Color[3]; }
	~Palatte() { delete[] p; }
};

int main() {
	Palatte *p = new Palatte();
	delete p;
}