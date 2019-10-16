#include <iostream>
#include "length.h"
#include "reverse.h"

using namespace std;

int main() {
	char text[100];
	cout << "문자를 입력하세요 :";
	cin >> text;

	int len = length(text);

	reverse(text, len);

	cout << text << endl;
}