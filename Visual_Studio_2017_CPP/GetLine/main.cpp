#include <iostream>

using namespace std;

int main() {
    cout << "주소를 입력해주세요! :";
    char address[11];
    //getline은 공백이 낀 문자열을 입력받을 수 있게 도와주는 함수이다.
    cin.getline(address, 100, '\n');

    cout << "입력된 주소는 " <<address <<"입니다." << endl;

    return 0;
}