#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int *plus = new int[size];
		int n = size / 2;
		for (int i = 0; i < n; i++) {
			plus[i] = s1[i];
			plus[i + n] = s2[i];
		}
		return plus;
	}

	static int* remove(int s1[], int s2[], int size, int& retSize) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) s1[i] = NULL;
			}
		}
		for (int i = 0; i < size; i++) {
			if (s1[i] != NULL) retSize++;
		}

		int *del = new int[retSize];
		int n = 0;
		for (int i = 0; i < size; i++) {
			if (s1[i] != NULL) {
				del[n] = s1[i];
				n++;
			}
		}
			if (retSize == 0) return NULL;
			else return del;
	}
};


int main() {
	int x[5];
	int y[5];
	int retsize = 0;
	int size;
	cout << "정수 5 개 입력하라. 배열 x에 삽입한다 >>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수 5개 입력하라. 배열 y에 삽입한다 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}

	size = sizeof(x) / 4 + sizeof(y) / 4;

	int *tmp = ArrayUtility2::concat(x, y, size);

	for (int i = 0; i < size; i++) {
		cout << tmp[i] << ' ';
	}
	cout << endl;


	size = sizeof(x) / 4;
	tmp = ArrayUtility2::remove(x, y, size, retsize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << endl;
	for (int i = 0; i < retsize; i++) {
		cout << tmp[i] << ' ';
	}
	cout << endl;
	
}