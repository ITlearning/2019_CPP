#include <iostream>
using namespace std;

template<class T>
T remove(T src[],int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T cont = 0;
	T* p = new int[sizeSrc];
	for (int i = 0; i < sizeSrc; i++) {
		if (i > sizeMinus) {
			break;
		}
		if (src[i] != minus[i]) {
			p[cont] = src[i];

			cont++;
		}
		
	}
	retSize = cont + 1;

	return *p;
}

int main() {
	int src[] = { 10,20,30,40 };
	int minus[] = { 10, 20 };
	int Retsize;
	remove(src, 4, minus, 2, Retsize);

	
}