#include <iostream>

using namespace std;

int main() {
    cout << "�ּҸ� �Է����ּ���! :";
    char address[11];
    //getline�� ������ �� ���ڿ��� �Է¹��� �� �ְ� �����ִ� �Լ��̴�.
    cin.getline(address, 100, '\n');

    cout << "�Էµ� �ּҴ� " <<address <<"�Դϴ�." << endl;

    return 0;
}