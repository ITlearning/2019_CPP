#include "Manager.h"
	void Manager::addP(vector<Participant>& p) {
		cout << "����� ����� �Է��ϼ��� [������, �̸�, Ű, ����, ������ ���Դϴ�] " << endl;
		cout << ">> ";
		cin >> position >> name >> tall >> age >> weight;
		Participant A(position, name, tall, age, weight);
		p.push_back(A);
	}
	void Manager::deleteP(Participant a) {
		//������ ����
		//for������ �Է°� �̸��̶�, ������ �̸��̶� ���ϸ鼭 ��ġ�ϸ� �� ��ü ����. ���� ������ �̸��� ���ٸ�, ���� �Է� �� �Ѿ
	}
	void Manager::graph(Participant a) {
		//�������� ��� ���,�϶� ���� ����ȭ ���� -
		//1���� : 10��, 2���� : 5�� ,�� �̷�������
	}
	void Manager::pheonix(vector<Participant>& p) {
		string name;
		int num;
		//�����ڴ�, ��� �������� ��ǥ���� ������ �� ���� (*���� ����)
		//��������� ��κ��� �����Ұ��� ���� ����
		//��ǥ���� �����ϰ� �Ǹ�, ��ǥ �߰��Ұ���, ������ ���ؼ�,������ ��ü ���� vote �� �ٲ���.
		cout << "���� ��ɿ� ���� ���� ȯ���մϴ�." << endl;
		cout << "�� ����� ��ǥ�� ��ü�� ������ ���� �ְ� , ���ټ��� �ִ� ����Դϴ�." << endl;
		cout << "� ����� ��ǥ���� �����ϰ� �����ʴϱ�?" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
		cout << ">>";
		cin >> name;
		for (int i = 0; i <	p.size(); i++) {
			if (p[i].getName() == name) {
				cout << "���� " << p[i].getName() << " �� ��ǥ���� " << p[i].getVote() << " �Դϴ�." << endl;
				cout << "��ǥ���� �󸶳� �ٲٰ� �����ʴϱ�? >> ";
				cin >> num;
				p[i].setVote(num);
				cout << "���������� ��ǥ���� �ٲپ����ϴ�. ����� ��ǥ���� �ٷ� ����˴ϴ�." << endl;
			}
		}
	}
	void Manager::comment(vector<Participant>& p, Viewer& b) {
		string Pname;
		string Vname;
		//�Խ��ǿ� ��, ���� ������ ���� �� �۾��̸� ��õ.
		//���� 20�帲
		//��÷�� ����, ��ǥ�� ��� �� ���� �� ����.
		//�̸� �ϱ� ���ؼ�, �Խ��� ���� ������ ��ü������ ��������ϰ�,
		//������ �Ŀ� ���ڿ� �񱳸� ����, Ȥ�� ���������, ���° ��� �̷������� ã�Ƽ�,
		//�� ����� �� ������� ��ǥ�� ���ִ°ŷ� �ؾ��ҰŰ���. 
		//�̸� ���ؼ�, ����� ���涧, ��ǥ���� �̸��� ���� ��������ҰŰ���.

		cout << "*********************************** Welcome To 'Produce XI' Official Notice Board!! ***********************************" << endl;
		cout << ">> Who is want you see??" << endl;
		cout << "************************************************** Participants List **************************************************" << endl;

		for (int i = 0; i < p.size(); i++) {
			cout << "[" << i + 1 << "]" << ": " << p[i].getName() << endl;
		}
		cout << "***********************************************************************************************************************" << endl;
		cout << ">> ";
		cin >> Pname;

		system("cls");
		for (int i = 0; i < p.size(); i++) {
			if (Pname == p[i].getName()) {
				Pname = p[i].getName();
				cout << "****************************************** Welcome To " << Pname << "'s Notice Board!!" << "****************************************** " << endl;
				cout << ">> Who is best Commenter?" << endl;
				cout << "************************************************* Cheer Up Comment List ************************************************" << endl;
				b.showComment();
				cout << "***********************************************************************************************************************" << endl;
				cout << "������ ��� ����� �� ����� �̾��ּ���." << endl;
				cin >> Vname;
				system("cls");
				if (b.viewer.find(Vname) == b.viewer.end()) {
					cout << "�����ϴ�." << endl;
				}
				else {
					p[i].PlusVote(10);
					cout << Vname << "���� ��ǥ�� " << Pname << " ���������� ��ǥ���� �������׽��ϴ�." << endl;
				}
			}
		}
	}