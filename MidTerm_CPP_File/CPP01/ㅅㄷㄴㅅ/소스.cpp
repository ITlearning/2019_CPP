#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "임창정";
	string b = "정발산";
	int a = s.at(0);
	int len = s.length();
	int len2 = b.length();
	cout << a <<' '<< len/4  <<' '<< len2<< endl;

	if ((s.at(len - 2) == b.at(0)) &&  s.at(len - 1) == b.at(1)){
		cout << "맞음" << endl;
	}
	else {
		cout << "아님" << endl;
	}
}