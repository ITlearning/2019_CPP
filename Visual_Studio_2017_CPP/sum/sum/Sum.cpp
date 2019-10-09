#include <iostream>

using namespace std;

int a = 5;
int b = 10;
int c;



int main() {
	cout <<"a + b / 3 * 3 = " << a + b / 3 * 3 << endl;
	cout << "b << 2 = " << b << 2 << endl;
	cout << "a != b = " << ( a != b ) << endl;
	cout << "b % a = " << (b % a) << endl;
	cout << "(a > b ) ? a : b = " << ((a > b) ? a : b) << endl;
	cout << "sizeof(a) = " << sizeof(a) << endl;
	a++;
	cout << "c = a++; 이후의 c 값 = " << (c = a) << endl;
	cout << "a += b; 이후의 a 값 = " << (a += b) << endl;
	cout << "a & b = " << (a & b) << endl;
	cout << "c = (a + b, a - b) = " << (c = (a + b, a - b)) << endl;

}