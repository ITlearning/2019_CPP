#include <iostream>
#include <string>

using namespace std;

int main() {
    char text[100];
    int count = 0;
    cout << "문자들을 입력하라 (100개 미만)." << endl;
    cin.getline(text, 100, '\n');
    for (int i = 0; i < 100; i++) {
        if (text[i] == 'x' || text[i] == 'X') {
            count++;
        }
    }

    cout << "x의 개수는 " << count;
}
