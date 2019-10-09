#include <iostream>
#include <string>
using namespace std;

class Sample {
	int *p;
	int size;

public:
	Sample(int n) {
		size = n;
		p = new int[n];
		//n개 정수 배열의 동적 생성
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {
	string a;
	int i = 0;
	getline(cin, a, '\n');
	while (i != a.length()) {
		if()
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}

int Sample::big() {
	int sum = 0;
	
	for (int i = 0; i < size; i++) {

	}

	return sum;
}

Sample::~Sample() {}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}