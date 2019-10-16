#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NameCircle : public Circle {
	string s;
public:
	void setName(string s) { this->s = s; }
	string getName() { return s; }
	NameCircle(int a = 1, string s = "Pizza") {
		setRadius(a);
		setName(s);
	}
};

int main() {
	
	int Cir;
	string b;
	string c;
	NameCircle pizza[5];
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> Cir >> b;
		
		pizza[i].setRadius(Cir);
		pizza[i].setName(b);
	}

	cout << "���� ������ ū ���ڴ� ";
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getRadius() < pizza[i + 1].getRadius()) {
			c = pizza[i + 1].getName();
		}
	}

	cout << c;
}