#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
		//"C:\\Users\\IoT-14\\source\\repos\\IBY\\Week07-3\\input.txt";

	ifstream fin(file, ios::binary); //바이너리형식으로 읽지 않으면 텍스트 형식으로읽게 되는데 텍스트 형식은 일부분 자르고 더하기때문에 실제 파일 크기가 아니다.
	if (!fin) {						 //바이너리 형식으로 읽으면 모든 글자들을 일기에 본 크기가 나오게 된다.
		cout << file << "열기 오류 " << endl;
		return 0;
	}

	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << endl;
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}