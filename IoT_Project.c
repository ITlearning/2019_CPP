#include <stdio.h>
#define MAX 100000
int num[MAX];
int result = 0;
int N = 0;

void countTeams(int h, int wA, int wB, int wC) {
	if (h == N) {
		return;
	}
	else {
		if (h % 3 == 0) {
			h++;
			countTeams(h, wA, wB, wC);
			countTeams(h, wA - num[h], wB, wC);
			countTeams(h, wA, wB - num[h], wC);
			countTeams(h, wA, wB, wC - num[h]);
		}
		h++;
		countTeams(h, wA, wB, wC);
		countTeams(h, wA + num[h], wB, wC);
		countTeams(h, wA, wB + num[h], wC);
		countTeams(h, wA, wB, wC + num[h]);
	}
}

int main() {
	int T;

	freopen("input.txt", "r", stdin);
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &N);

		for (int j = 1; j <= N; j++) {
			scanf("%d", &num[j]);
		}
		countTeams(0, 0, 0, 0);


		printf("%d\n", result);
		result = 0;
	}
}