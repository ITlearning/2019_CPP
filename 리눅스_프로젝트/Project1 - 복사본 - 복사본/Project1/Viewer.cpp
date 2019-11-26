#include "Viewer.h"
#include "Participant.h"
using namespace std;
int Pick = NULL;

	void Viewer::vote(vector<Participant>& p) {
		cout << "어떤 연습생에게 투표하시겠습니까?" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << p[i].getName() << " 연습생 (" << p[i].getPosition() << ")" << endl;
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
				cout << "이름:" << p[i].getName() << " 포지션: " << p[i].getPosition() << " 키: " << p[i].getTall() << " 몸무게: " << p[i].getWeight() << " 나이: " << p[i].getAge() << endl;;
			}
		}
		if (state == 0) {
			cout << "1을 입력하면 이전화면으로 돌아갑니다.";
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
			cout << i + 1 << "등 : " << p[i].getName() << "\t 투표수 : " << p[i].getVote() << endl;
		}
		if (state == 0) {
			cout << "1을 입력하면 이전화면으로 돌아갑니다.";
			cin >> state;
			if (state == 1) {
				state = 0;
				system("cls");
			}
		}
	}
	void Viewer::mypick(vector<Participant>& p) {
		int num;
		//자신의 고정픽을 선정하여, 매주 한표씩 자동으로 투표되게 함.
		//고정픽 투표는 공짜로, 다른 참가자를 둘러볼 기회도 제공.
		//추가 투표권, 투표수 x2, 자동투표 , 
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
		//자신이 좋아하는 참가자에게, 응원의 한마디를 남길 수 있는 기능.
		//게시판에 들어가야할 기능.
		//어떤 참가자에게, 응원의 글을 남길 것인지 받고, 남기게 하는것.
		//게시판 내의 출력 기능은, 모든 참가자에게 달린 댓글을 일괄적으로 보여준다.
		//댓글이 없다면 공백, 있다면 남겨진 순대로 보여준다.
		//댓글을 달땐, 이름도 같이.
		cout << "*********************************************** Produce X*I Community  *************************************************" << endl;
		cout << endl;
		cout << "                                 [자신이 좋아하는 연습생에게 응원의 한마디를 해주세요!]                                   " << endl;
		cout << "************************************************ List of Participant  **************************************************" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << "[" << p[i].getName() << "]" << " 연습생! " << endl;
		}
		cout << ">> ";
		cin >> name;

		system("cls");

		for (int i = 0; i < p.size(); i++) {
			if (p[i].getName() == name) {
				cout << "*********************************************** Produce X*I Community  *************************************************" << endl;
				cout << endl;
				cout << "                                 " << "[" << p[i].getName() << " 연습생에게 힘이되는 응원의 한마디를 남기세요!]                                   " << endl;
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