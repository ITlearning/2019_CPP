#include <iostream>
#include <string>
using namespace std;

void RSP(string r, string j) {
	if ((r == "가위" && j == "보") || (r == "바위" && j == "가위") || (r == "보" && j == "바위")) {
		cout << "로미오가 이겼습니다." << endl;
	}
	else if ((r == "보" && j == "가위") || (r == "가위" && j == "바위") || (r == "바위" && j == "보")){
		cout << "줄리엣이 이겼습니다." << endl;
	}
	else if (r == j) {
		cout << "비겼습니다." <<endl;
	}
}

int main() {
	string r;
	string j;
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	cout << "로미오 >> ";
	cin >> r;
	cout << "줄리엣 >> ";
	cin >> j;

	RSP(r, j);
}