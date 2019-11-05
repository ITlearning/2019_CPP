#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic;

	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("apple", "���"));
	dic["cherry"] = "ü��";

	cout << "����� �ܾ� ����" << dic.size() << endl;

	string eng;
	
	while (true) {
		cout << "ã����� �ܾ� >>";
		getline(cin, eng);
		if (eng == "exit")
			break;

		if (dic.find(eng) == dic.end())
			cout << "����" << endl;
		else
			cout << dic[eng] << endl;
	}
	cout << "����" << endl;
}