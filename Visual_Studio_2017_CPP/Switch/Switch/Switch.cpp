#include <iostream>

using namespace std;

int main() {
	int score, div;
	cout << "������ �Է����ּ��� : ";
	cin >> score;

	div = score / 10;

	switch (div)
	{
	case 10:
	case 9:
		cout << "A"; break;
	case 8:
		cout << "B"; break;
	case 7:
		cout << "C"; break;
	case 6:
		cout << "D"; break;
	default:
		cout<< "F"; break;
		
	}
}