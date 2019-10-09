
//String 클래스를 이용한 문자열 입력 및 다루기
#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling"); //문자열 song
    string John("John Park"); // 문자열 John
    string singer; //문자열 singer

    cout << song + "을 부른가수는?"; //+로 문자열 연결
    cout << "(힌트! 첫글자는 " << John[0] << " )"<< endl;
    cout << "입력 : ";


    getline(cin, singer); //문자열 입력
    if(singer == John)
        cout << "맞았습니다.";
    else
        cout << "틀렸습니다." + John + "입니다." << endl; // + 로 문자열 연결
}