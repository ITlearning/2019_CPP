
//String Ŭ������ �̿��� ���ڿ� �Է� �� �ٷ��
#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("Falling"); //���ڿ� song
    string John("John Park"); // ���ڿ� John
    string singer; //���ڿ� singer

    cout << song + "�� �θ�������?"; //+�� ���ڿ� ����
    cout << "(��Ʈ! ù���ڴ� " << John[0] << " )"<< endl;
    cout << "�Է� : ";


    getline(cin, singer); //���ڿ� �Է�
    if(singer == John)
        cout << "�¾ҽ��ϴ�.";
    else
        cout << "Ʋ�Ƚ��ϴ�." + John + "�Դϴ�." << endl; // + �� ���ڿ� ����
}