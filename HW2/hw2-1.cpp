#include <iostream>
#define MAX 100
using namespace std;

//(1) 번 문제
//int big(int x, int y) {
//	if (x < y) {
//		if (y < MAX) {
//			return y;
//		}
//		else return MAX;
//	}
//	else if (x > y) {
//		if (x < MAX) {
//			return x;
//		}
//		else
//			return MAX;
//	}
//}
//
//int big(int x, int y, int z) {
//	if (x < y) {
//		if (y < z) {
//			return y;
//		}
//		else return z;
//	}
//	else if (x > y) {
//		if (x < z) {
//			return x;
//		}
//		else
//			return z;
//	}
//}

//(2) 번 문제
int big(int x, int y, int z = MAX) {
	if (x < y) {
		if (y < z) {
			return y;
		}
		else return z;
	}
	else if (x > y) {
			if (x < z) {
				return x;
			}
			else
				return z;
	}
}


int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << ' ' << y << ' ' << z << endl;
}