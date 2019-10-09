#include <iostream>
using namespace std;

class Statistics {
	int *p;
	int count;
public:
	Statistics();

	bool operator! ();
	Statistics& operator>> (int &avg);
	Statistics& operator<< (int x);
	void operator~ ();
};

Statistics::Statistics() {
	p = new int[10];
	count = 0;
}

bool Statistics::operator!() {
	if ( count == 0 ) return true;
	else return false;
}

Statistics& Statistics::operator>> (int &avg) {
	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += p[i];
	}
	avg = sum / count;

	return *this;
}

Statistics& Statistics::operator<< (int x) {
	p[count] = x;
	++count;

	return *this;
}

void Statistics::operator~(){
	for (int i = 0; i < count; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}


int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;
	
	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	
	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;

	cout << "avg=" << avg << endl;
}