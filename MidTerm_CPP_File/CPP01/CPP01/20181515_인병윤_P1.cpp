#include <iostream>
#include <string>
using namespace std;

class Integer {
	int n;
public:
	Integer(int n) {
		this->n = n;
	}
	Integer(string s) {
		this->n = stoi(s);
	}
	int get() { return n; }
	void set(int n) {
		this->n = n;
	}
	int isEven() { return true; }
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}