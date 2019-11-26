//�� �ڵ�

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <windows.h>
#include <process.h>
#include <algorithm>
#include <ctime>
#define People 3
using namespace std;
int Pick = NULL;
int num = 0;

class Participant {
	static string *textArray;
	static int num;
	string position, name, tall, age, weight, user;
	int vote;//������ ��ǥ��
public:
	Participant() { vote = 0; };
	void setParticipant(string position, string name, string tall, string age, string weight) {
		this->position = position;
		this->name = name;
		this->age = age;
		this->weight = weight;
		vote = rand() % 100;
	}
	void votep() {
		this->vote++;
	}
	void PickVote() {
		this->vote += 2;
	}
	string getName() { return name; }
	string getPosition() { return position; }
	string getTall() { return tall; }
	string getAge() { return age; }
	string getWeight() { return weight; }
	string getUser() { return user; }
	void setUser(string user) { this->user = user; }
	int getVote() { return vote; }
	void setVote(int num) { this->vote = num; }
	bool operator <(Participant &p) { return this->vote > p.vote; }

	void add(string text) {
		textArray[num] = text;
		++num;
	}

	void print() {
		for (int i = 0; i < num; ++i) {
			cout <<user[i] << ": " << textArray[i] << endl;
		}
	}
};

string *Participant::textArray = new string[1000];
int Participant::num = 0;

class Viewer {
	
public:
	string name, comment, username;
	
	void vote(Participant p[]) {
		cout << "� ���������� ��ǥ�Ͻðڽ��ϱ�?" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() << " ������ (" << p[i].getPosition() << ")" << endl;
		}
		cin >> name;
		for (int i = 0; i < People; i++) {
			if (p[i].getName() == name) {
				p[i].votep();
			}
		}
	}
	void show(Participant p[]) {
		sort(p, p + 3);
		for (int i = 0; i < People; i++) {
			cout << i + 1 << "�� : " << p[i].getName() << "\t ��ǥ�� : " << p[i].getVote() << endl;
		}
	}
	void mypick(Participant p[]) {
		int num;
		//�ڽ��� �������� �����Ͽ�, ���� ��ǥ�� �ڵ����� ��ǥ�ǰ� ��.
		//������ ��ǥ�� ��¥��, �ٸ� �����ڸ� �ѷ��� ��ȸ�� ����.
		//�߰� ��ǥ��, ��ǥ�� x2, �ڵ���ǥ , 
		if (Pick == NULL) {
			cout << "���Ͻô� ������ �������� �����ϼ���!(���ڸ� �����ּ���)" << endl;
			for (int i = 0; i < People; i++) {
				cout << i + 1 << ": " << p[i].getName() << endl;
			}
			cin >> num;
			Pick = num - 1;
			cout << p[Pick].getName() << " �������� �������� �Ǿ����ϴ�!" << endl;
			cout << "������ " << p[Pick].getName() << " ���������� �ϴ� ��ǥ�� ���� ��ǥ���� ���Ե���������, �� ����� ������ ��� ��ǥ�ι� ȿ���� �� �� �ֽ��ϴ�." << endl;
		}
		else {
			cout << p[Pick].getName() << " ���������� �ι��� ��ǥ�� �Ͻðڽ��ϱ�?" << endl;
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
	void cheerup(Participant p[]) {
		string name;
		string commit;
		int a = 0;
		//�ڽ��� �����ϴ� �����ڿ���, ������ �Ѹ��� ���� �� �ִ� ���.
		//�Խ��ǿ� ������ ���.
		//� �����ڿ���, ������ ���� ���� ������ �ް�, ����� �ϴ°�.
		//�Խ��� ���� ��� �����, ��� �����ڿ��� �޸� ����� �ϰ������� �����ش�.
		//����� ���ٸ� ����, �ִٸ� ������ ����� �����ش�.
		//����� �޶�, �̸��� ����.
		cout << "*********************************************** Produce X*I Community  **************************************************" << endl;
		cout << " �ڽ��� �����ϴ� ���������� ������ �Ѹ���! " << endl;
		cout << "���α׷� ���� ������ ���" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() << " ������! " << endl;
		}
		cout << ">> ";
		cin >> name;
		for (int i = 0; i < People; i++) {
			if (p[i].getName() == name) {
				cout << "�ڽ��� �̸���,�ϰ� ���� ���� ���⼼��!" << endl;
				cout << ">> ";
				cin >> username >> commit;
				p[i].setUser(username);
				p[i].add(commit);
			}
		}
	}
}; //main, viewer manager Participant header 

class Manager :public Participant, Viewer {
	int BP;
	int BV;
	string position, name, tall, age, weight;
public:
	void addP(Participant b[]) {
		cout << "********************************************** Input a Participant Profile *********************************************" << endl;
		cout << "����� ����� �Է��ϼ��� [������, �̸�, Ű, ����, ������ ���Դϴ�] [3���Է� �ٶ��ϴ�.]" << endl;

		for (int i = 0; i < 3; i++) {
			cout << ">> ";
			cin >> position >> name >> tall >> age >> weight;
			b[i].setParticipant(position, name, tall, age, weight);
		}
	}

	void show(Participant p[]) {
		cout << "���� ���α׷��� �����ϰ� �ִ� ������ ���" << endl;
		for (int i = 0; i < People; i++) {
			cout <<"["<< i + 1 <<"] "<< " : " << p[i].getName() << " [��Ʈ]: "<< p[i].getPosition() << " [Ű]: " << p[i].getTall() << " [����]: " << p[i].getAge() << " [������]: " << p[i].getWeight() << endl;
		}
	}

	void deleteP(Participant a) {
		//������ ����
		//for������ �Է°� �̸��̶�, ������ �̸��̶� ���ϸ鼭 ��ġ�ϸ� �� ��ü ����. ���� ������ �̸��� ���ٸ�, ���� �Է� �� �Ѿ
	}
	void graph(Participant a) {
		//�������� ��� ���,�϶� ���� ����ȭ ���� 
		//1���� : 10��, 2���� : 5�� ,�� �̷�������
	}
	void pheonix(Participant p[]) {
		string name;
		int num;
		//�����ڴ�, ��� �������� ��ǥ���� ������ �� ���� (*���� ����)
		//��������� ��κ��� �����Ұ��� ���� ����
		//��ǥ���� �����ϰ� �Ǹ�, ��ǥ �߰��Ұ���, ������ ���ؼ�,������ ��ü ���� vote �� �ٲ���.

		cout << "���� ��ɿ� ���� ���� ȯ���մϴ�." << endl;
		cout << "�� ����� ��ǥ�� ��ü�� ������ ���� �ְ� , ���ټ��� �ִ� ����Դϴ�." << endl;
		cout << "� ����� ��ǥ���� �����ϰ� �����ʴϱ�?" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
		cout << ">>";
		cin >> name;
		for (int i = 0; i < People; i++) {
			if (p[i].getName() == name) {
				cout << "���� " << p[i].getName() << " �� ��ǥ���� " << p[i].getVote() << " �Դϴ�." << endl;
				cout << "��ǥ���� �󸶳� �ٲٰ� �����ʴϱ�? >> ";
				cin >> num;
				p[i].setVote(num);
				cout << "���������� ��ǥ���� �ٲپ����ϴ�. ����� ��ǥ���� �ٷ� ����˴ϴ�." << endl;
			}
		}
	}
	void comment(Participant p[]) {
		string name;
		//�Խ��ǿ� ��, ���� ������ ���� �� �۾��̸� ��õ.
		//���� 20�帲
		//��÷�� ����, ��ǥ�� ��� �� ���� �� ����.
		//�̸� �ϱ� ���ؼ�, �Խ��� ���� ������ ��ü������ ��������ϰ�,
		//������ �Ŀ� ���ڿ� �񱳸� ����, Ȥ�� ���������, ���° ��� �̷������� ã�Ƽ�,
		//�� ����� �� ������� ��ǥ�� ���ִ°ŷ� �ؾ��ҰŰ���. 
		//�̸� ���ؼ�, ����� ���涧, ��ǥ���� �̸��� ���� ��������ҰŰ���.

		cout << "*********************************** Welcome To 'Produce XI' Official Notice Board!! ***********************************" << endl;
		cout << "�۵��� ���� ���Ͻô� �������� �̸��� �Է��ϼ���" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() << ' ';
		}
		cin >> name;

		for (int i = 0; i < People; i++) {
			if (p[i].getName() == name) {
				p[i].print();
			}
		}
		system("cls");
	}
};
int main() {
	Manager a;
	Viewer c;
	Participant b[3];
	srand((unsigned int)time(0));

	while (1) {
		cout << "******************************************************* Welcome ********************************************************" << endl;
		cout << "[1]: Viewer, [2]: Manager, [3]: Exit" << endl;
		cout << ">> ";
		cin >> num;
		system("cls");

		if (num == 1) {
			cout << "******************************************************* Choice ********************************************************" << endl;
			cout << "[1]: Vote!\t";
			cout << "[2]: Rank!\t" << endl;
			cout << "[3]: Pick!\t";
			cout << "[4]: Cheer\t" << endl;
			cout << "[5]: Back!\t";
			cout << "[6]: Exit!\t" << endl;
			cout << ">> ";
			cin >> num;

			system("cls");

			if (num == 5) {
				continue;
			}
			else if (num == 1) {
				c.vote(b);
			}
			else if (num == 2) {
				c.show(b);
			}
			else if (num == 3) {
				c.mypick(b);
			}
			else if (num == 4) {
				c.cheerup(b);
			}
			else if (num == 6) {
				break;
			}
		}

		else if (num == 2) {
			cout << "******************************************************* Choice ********************************************************" << endl;
			cout << "[1]: Vote!\t";
			cout << "[2]: Rank!\t" << endl;
			cout << "[3]: Show!\t";
			cout << "[4]: Best!\t" << endl;
			cout << "[5]: Rank2\t";
			cout << "[6]: Phonix\t" << endl;
			cout << "[7]: Sign up!\t";
			cout << "[8]: Back!\t" << endl;
			cout << "[9]: Exit!\t" << endl;
			cout << ">> ";
			cin >> num;

			system("cls");

			if (num == 8) {
				continue;
			}
			else if (num == 1) {
				c.vote(b);
			}
			else if (num == 2) {
				c.show(b);
			}
			else if (num == 3) {
				a.show(b);
			}
			else if (num == 4) {
				a.comment(b);
			}
			else if (num == 5) {
				;
			}
			else if (num == 6) {
				a.pheonix(b);
			}
			else if (num == 7) {
				a.addP(b);
			}
			else if (num == 9) {
				break;
			}

			//�Է� �ް�, �Է� ��ȣ������ ��ȣ�ۿ�
		}
		else if (num == 3) {
			break;
		}
		else {
			continue;
		}
	}
}
