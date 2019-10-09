#include <iostream>
#include <string>
using namespace std;
class Color {
	string c;
public :
	Color() { c = "white"; cout << "기본생성자" << endl; }
	Color(string c) { this->c = c; cout << "매개변수생성자" << endl; }
	~Color() { cout << "소멸자" << endl; }
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