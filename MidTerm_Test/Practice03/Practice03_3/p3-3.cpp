#include <iostream>
using namespace std;

class Sample {
	int *p;
	int size;

public:
	Sample(int n) {
		size = n;
		p = new int [n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

Sample::~Sample() {
	delete[] p;
}

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}

int Sample::big() {
	int a = 0;
	for (int i = 0; i < size; i++) {
		if (p[i] > a) {
			a = p[i];
		}
	}

	return a;
}

int main() {
	Sample s(10);

	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}