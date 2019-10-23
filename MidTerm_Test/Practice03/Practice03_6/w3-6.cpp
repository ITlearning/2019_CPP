#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}


double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}


class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

CircleManager::CircleManager(int size) {
	string n, r;
	
	this->size = size;
	p = new Circle[size];

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> n >> r;
		p[i].setCircle(n, stoi(r));
	}
	fflush(stdin);
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string s;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> s;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == s) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {
	int a;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> a;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > a) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int num;
	string s;
	int radi;
	cout << "���� ���� >> ";
	cin >> num;
	CircleManager manager(num);

	

	manager.searchByName();
	manager.searchByArea();



}