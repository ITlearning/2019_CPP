#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	string tel;
public :
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Person::Person() {}

void Person::set(string name_, string tel_) {
	name = name_;
	tel = tel_;
}

int main() {
	Person text[3];
	int t = 0;
	int count = 1;
	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << count++ << ">> ";
		getline(cin, s, '\n');
	}
	
	
}