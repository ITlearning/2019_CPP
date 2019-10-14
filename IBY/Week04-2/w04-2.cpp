#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n; //참조 변수 refn 선언. refn은 n에 대한 별명
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; //i가 가지고 있는 값만 넣은거임 
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	int *p = &refn; //p는 n의 주소를 가짐
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}