#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
		//"C:\\Users\\IoT-14\\source\\repos\\IBY\\Week07-3\\input.txt";

	ifstream fin(file, ios::binary); //���̳ʸ��������� ���� ������ �ؽ�Ʈ ���������а� �Ǵµ� �ؽ�Ʈ ������ �Ϻκ� �ڸ��� ���ϱ⶧���� ���� ���� ũ�Ⱑ �ƴϴ�.
	if (!fin) {						 //���̳ʸ� �������� ������ ��� ���ڵ��� �ϱ⿡ �� ũ�Ⱑ ������ �ȴ�.
		cout << file << "���� ���� " << endl;
		return 0;
	}

	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << endl;
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}