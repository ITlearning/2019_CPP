#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
		cout << "�ι̿� :";
		cin >> s;
		string t;
		cout << "�ٸ��� :";
		cin >> t;



		
	if (s == "����" && t == "��") 
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if (s == "��" && t == "����") 
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if (s == "����" && t == "��") 
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else if (s == "��" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	else if (s == t) {
		cout << "�����ϴ�. �ٽ� �����ּ���" << endl;

		}



}