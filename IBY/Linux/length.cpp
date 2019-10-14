#include "length.h"

int length(char * text) {
	int len = 0;
	while (text[len++] != 0) {}

	return len - 1;
}