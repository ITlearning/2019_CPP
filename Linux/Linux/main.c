#include "my_header.h"

const char *pattern = "Happy families are all alike;";

int main() {

	FILE *file = fopen("input.txt", "r");

	printf("%d\n", matching(pattern, file));

	fclose(file);

	return 0;
}