//벡터, 재혁이 코드, 두호코드 합치는 메인문
#include "Participant.h"
#include "Viewer.h"
#include "Manager.h"

using namespace std;
vector<Participant> Group;
int num = 0;
int main() {
	Manager a;
	Viewer c;
	string position, name, tall, age, weight;
	srand((unsigned int)time(0));

	while (1) {
		cout << "******************************************************* Welcome ********************************************************" << endl;
		cout << endl;
		cout << "                                         [1]: Viewer, [2]: Manager, [3]: Exit                                          " << endl;
		cout << endl;
		cout << "******************************************************* Choice! *******************************************************" << endl;
		cout << ">> ";
		cin >> num;
		system("cls");

		if (num == 1) {
			cout << "******************************************************* Welcome ********************************************************" << endl;
			cout << endl;
			cout << "[1]: Vote!\t";
			cout << "[2]: Rank!\t" << endl;
			cout << "[3]: Show!\t";
			cout << "[4]: Pick!\t";
			cout << "[5]: Cheer\t" << endl;
			cout << "[6]: Back!\t";
			cout << "[7]: Exit!\t" << endl;
			cout << endl;
			cout << "******************************************************* Choice ********************************************************" << endl;
			cout << ">> ";
			cin >> num;

			system("cls");

			if (num == 6) {
				continue;
			}
			else if (num == 1) {
				
			}
			else if (num == 2) {
				c.Rank(Group);
			}
			else if (num == 3) {
				c.show(Group);
			}
			else if (num == 4) {
				c.mypick(Group);
			}
			else if (num == 5) {
				c.cheerup(Group);
			}
			else if (num == 6) {
				continue;
			}
		}

		else if (num == 2) {
			cout << "******************************************************* Welcome ********************************************************" << endl;
			cout << endl;
			cout << "[1]: Vote!\t";
			cout << "[2]: Rank!\t";
			cout << "[9]: Input\t" << endl;
			cout << "[3]: Show!\t";
			cout << "[4]: Best!\t";
			cout << "[10]: addP\t" << endl;
			cout << "[5]: Rank2\t";
			cout << "[6]: Phonix\t" << endl;
			cout << "[7]: Back!\t";
			cout << "[8]: Exit!\t" << endl;
			cout << endl;
			cout << "******************************************************* Choice ********************************************************" << endl;
			cout << ">> ";
			cin >> num;

			system("cls");

			if (num == 7) {
				continue;
			}
			else if (num == 1) {
				a.vote(Group);
			}
			else if (num == 2) {
				a.Rank(Group);
			}
			else if (num == 3) {
				a.show(Group);
			}
			else if (num == 4) {
				a.comment(Group, c);
			}
			else if (num == 5) {
				;
			}
			else if (num == 6) {
				a.pheonix(Group);
			}
			else if (num == 8) {
				break;
			}
			else if (num == 9) {
				cout << "********************************************** Input a Participant Profile *********************************************" << endl;
				cout << "********** 등록할 참가자의 프로필을 입력하세요. [포지션, 이름, 키, 나이, 몸무게 순입니다] [3명입력 바랍니다.] **********" << endl;

				for (int i = 0; i < 3; i++) {
					cout << ">> ";
					cin >> position >> name >> tall >> age >> weight;
					Participant A(position, name, tall, age, weight);
					Group.push_back(A);
				}

				system("cls");
			}
			else if (num == 10) {
				a.addP(Group);
			}
			else {
				continue;

				//입력 받고, 입력 번호에따른 상호작용
			}
		}
	}
}
