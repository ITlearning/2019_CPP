#include <stdio.h>

void selectionSort(int data[], int n) {
	int tmp;
	int last = 0;
	for (int i = 0; i < n - 1; i++) {
		last = i;
		for (int j = i + 1; j < n; j++) {
			if (data[j] < data[last]) {
				last = j;
			}
		}
		tmp = data[last];
		data[last] = data[i];
		data[i] = tmp;
	}
}
int main() {
	int data[10] = { 3, 31, 48, 73, 8, 11, 20, 29, 65, 15 };

	printf("selectionSort \n");
	selectionSort(data, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
}