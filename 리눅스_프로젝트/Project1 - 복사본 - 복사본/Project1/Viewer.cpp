#include "Viewer.h"
#include "Participant.h"
using namespace std;
int Pick = NULL;

	void Viewer::vote(vector<Participant>& p) {
		cout << "� ���������� ��ǥ�Ͻðڽ��ϱ�?" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << p[i].getName() << " ������ (" << p[i].getPosition() << ")" << endl;
		}
		cin >> name;
		for (int i = 0; i < p.size(); i++) {
			if (p[i].getName() == name) {
				p[i].votep();
			}
		}
	}

	void Viewer::show(vector<Participant>& p) {
		string name;
		cout << "Please input the name that you want to see>>";
		cin >> name;
		for (int i = 0; i < p.size(); i++) {
			if (p[i].getName() == name) {
				cout << "�̸�:" << p[i].getName() << " ������: " << p[i].getPosition() << " Ű: " << p[i].getTall() << " ������: " << p[i].getWeight() << " ����: " << p[i].getAge() << endl;;
			}
		}
		if (state == 0) {
			cout << "1�� �Է��ϸ� ����ȭ������ ���ư��ϴ�.";
			cin >> state;
			if (state == 1) {
				state = 0;
				system("cls");
			}
		}
	}
	
	bool compare(Participant p, Participant p2) {
		return p.getVote() > p2.getVote();
	}

	void Viewer::Rank(vector<Participant>& p) {
		sort(p.begin(), p.end(), compare);
		for (int i = 0; i < p.size(); i++) {
			cout << i + 1 << "�� : " << p[i].getName() << "\t ��ǥ�� : " << p[i].getVote() << endl;
		}
		if (state == 0) {
			cout << "1�� �Է��ϸ� ����ȭ������ ���ư��ϴ�.";
			cin >> state;
			if (state == 1) {
				state = 0;
				system("cls");
			}
		}
	}
	void Viewer::mypick(vector<Participant>& p) {
		int num;
		//�ڽ��� �������� �����Ͽ�, ���� ��ǥ�� �ڵ����� ��ǥ�ǰ� ��.
		//������ ��ǥ�� ��¥��, �ٸ� �����ڸ� �ѷ��� ��ȸ�� ����.
		//�߰� ��ǥ��, ��ǥ�� x2, �ڵ���ǥ , 
		if (Pick == NULL) {
			cout << "Choose your own fixed pick!(Only Number Please!)" << endl;
			for (int i = 0; i < p.size(); i++) {
				cout << i + 1 << ": " << p[i].getName() << endl;
			}
			cin >> num;
			Pick = num - 1;
			cout << p[Pick].getName() << " trainee has become a fixture!" << endl;
			cout << "You can now double the vote for " << p[Pick].getName() << endl;
		}
		else {
			cout << " Would you like to double your vote for the " << p[Pick].getName() << " ? " << endl;
			cout << "[1] Y, [2] N" << endl;
			cin >> num;
			switch (num) {
			case 1:
				p[Pick].PickVote();
				break;
			case 2:
				break;
			}
		}
	}

	void Viewer::cheerup(vector<Participant>& p) {
		string Vname;
		string commit;
		string name;
		//�ڽ��� �����ϴ� �����ڿ���, ������ �Ѹ��� ���� �� �ִ� ���.
		//�Խ��ǿ� ������ ���.
		//� �����ڿ���, ������ ���� ���� ������ �ް�, ����� �ϴ°�.
		//�Խ��� ���� ��� �����, ��� �����ڿ��� �޸� ����� �ϰ������� �����ش�.
		//����� ���ٸ� ����, �ִٸ� ������ ����� �����ش�.
		//����� �޶�, �̸��� ����.
		cout << "*********************************************** Produce X*I Community  *************************************************" << endl;
		cout << endl;
		cout << "                                 [�ڽ��� �����ϴ� ���������� ������ �Ѹ��� ���ּ���!]                                   " << endl;
		cout << "************************************************ List of Participant  **************************************************" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << "[" << p[i].getName() << "]" << " ������! " << endl;
		}
		cout << ">> ";
		cin >> name;

		system("cls");

		for (int i = 0; i < p.size(); i++) {
			if (p[i].getName() == name) {
				cout << "*********************************************** Produce X*I Community  *************************************************" << endl;
				cout << endl;
				cout << "                                 " << "[" << p[i].getName() << " ���������� ���̵Ǵ� ������ �Ѹ��� ���⼼��!]                                   " << endl;
				cout << "***************************************** Input Text for chosen participant ********************************************" << endl;
				cout << ">> ";
				cin >> Vname >> commit;
				viewer.insert(make_pair(Vname, commit));
				system("cls");
			}
		}
	}

	void Viewer::showComment() {
		map<string, string>::iterator iter;
		for (iter = viewer.begin(); iter != viewer.end(); iter++) {
			cout << "[" << iter->first << "]: " << iter->second << endl;
		}
	}