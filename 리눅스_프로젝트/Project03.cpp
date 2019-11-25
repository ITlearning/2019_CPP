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
	string position, name, tall, age, weight;
	int vote;//각자의 투표수
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
	int getVote() { return vote; }
	void setVote(int num) { this->vote = num; }
	bool operator <(Participant &p) { return this->vote > p.vote; }

	void add(string text) {
		textArray[num] = text;
		++num;
	}

	void print() {
		for (int i = 0; i < num; ++i) {
			cout << i << ": " << textArray[i] << endl;
		}
	}
};

string *Participant::textArray = new string[1000];
int Participant::num = 0;

class Viewer {
public:
	string name, comment;
	void vote(Participant p[]) {
		cout << "어떤 연습생에게 투표하시겠습니까?" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() <<" 연습생 ("<< p[i].getPosition() << ")"<< endl;
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
			cout << i + 1 << "등 : " << p[i].getName() << "\t 투표수 : " << p[i].getVote() << endl;
		}
	}
	void mypick(Participant p[]) {
		int num;
		//자신의 고정픽을 선정하여, 매주 한표씩 자동으로 투표되게 함.
		//고정픽 투표는 공짜로, 다른 참가자를 둘러볼 기회도 제공.
		//추가 투표권, 투표수 x2, 자동투표 , 
		if (Pick == NULL) {
			cout << "원하시는 나만의 고정픽을 선택하세요!(숫자를 눌러주세요)" << endl;
			for (int i = 0; i < People; i++) {
				cout << i + 1 << ": " << p[i].getName() << endl;
			}
			cin >> num;
			Pick = num;
			cout << p[Pick].getName() << " 연습생이 고정픽이 되었습니다!" << endl;
			cout << "앞으로 " << p[Pick].getName() << " 연습생에게 하는 투표는 일일 투표수에 포함되지않으며, 이 기능을 눌렀을 경우 투표두배 효과를 볼 수 있습니다." << endl;
		}
		else {
			cout << p[Pick].getName() << " 연습생에게 두배의 투표를 하시겠습니까?" << endl;
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
		//자신이 좋아하는 참가자에게, 응원의 한마디를 남길 수 있는 기능.
		//게시판에 들어가야할 기능.
		//어떤 참가자에게, 응원의 글을 남길 것인지 받고, 남기게 하는것.
		//게시판 내의 출력 기능은, 모든 참가자에게 달린 댓글을 일괄적으로 보여준다.
		//댓글이 없다면 공백, 있다면 남겨진 순대로 보여준다.
		//댓글을 달땐, 이름도 같이.
		cout << "*********************************************** Produce X*I Community  **************************************************" << endl;
		cout << " 자신이 좋아하는 연습생에게 응원의 한마디! " << endl;
		cout << "프로그램 참여 연습생 목록" << endl;
		for(int i = 0; i < People; i++) {
			cout << p[i].getName() << " 연습생! " << endl;
		}
		cout << ">> ";
		cin >> name;
		for(int i = 0; i < People; i++) {
			if (p[i].getName() == name) {
				cout << "하고 싶은 말을 남기세요!" << endl;
				cout << ">> ";
				cin >> commit;
				p[i].add(commit);
			}
		}
	}
}; //main, viewer manager Participant header 

class Manager :public Participant, Viewer {
	int BP;
	int BV;
public:
	void addP() {
		Participant b;
		//b.setParticipant();
		// Group[num].push_back(b);
	}
	void deleteP(Participant a) {
		//참가자 삭제
		//for문으로 입력값 이름이랑, 참가자 이름이랑 비교하면서 일치하면 그 객체 삭제. 만약 참가자 이름이 없다면, 에러 입력 후 넘어감
	}
	void graph(Participant a) {
		//참가자의 등수 상승,하락 폭을 가시화 해줌 
		//1주차 : 10위, 2주차 : 5위 ,뭐 이런식으로
	}
	void pheonix(Participant p[]) {
		string name;
		int num;
		//관리자는, 모든 참가자의 투표수에 관여할 수 있음 (*조작 가능)
		//어떤참가자의 어떤부분을 조작할건지 묻고 실행
		//투표수를 조작하게 되면, 몇표 추가할건지, 뺄건지 정해서,참가자 객체 내의 vote 수 바꿔줌.

		cout << "조작 기능에 오신 것을 환영합니다." << endl;
		cout << "이 기능은 투표수 자체를 조작할 수도 있고 , 없앨수도 있는 기능입니다." << endl;
		cout << "어떤 사람의 투표수를 조작하고 싶으십니까?" << endl;
		for (int i = 0; i < People; i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
		cout << ">>";
		cin >> name;
			for (int i = 0; i < People; i++) {
				if (p[i].getName() == name) {
					cout << "현재 " << p[i].getName() << " 의 투표수는 " << p[i].getVote() << " 입니다." << endl;
					cout << "투표수를 얼마나 바꾸고 싶으십니까? >> ";
					cin >> num;
					p[i].setVote(num);
					cout << "성공적으로 투표수를 바꾸었습니다. 변경된 투표수는 바로 적용됩니다." << endl;
				}
			}
	}
	void comment(Participant a[], Viewer b) {
		string name;
		//게시판에 들어가, 가장 따뜻한 말을 쓴 글쓴이를 추천.
		//내공 20드림
		//당첨된 뷰어는, 투표권 몇개를 더 받을 수 있음.
		//이를 하기 위해선, 게시판 내의 정보를 전체적으로 보여줘야하고,
		//보여준 후엔 문자열 비교를 통해, 혹은 어떤참가자의, 몇번째 댓글 이런식으로 찾아서,
		//그 댓글을 쓴 사람에게 투표권 더주는거로 해야할거같고. 
		//이를 위해선, 댓글을 남길때, 투표자의 이름도 같이 보여줘야할거같음.

		cout << "*********************************** Welcome To 'Produce XI' Official Notice Board!! ***********************************" << endl;
		cout << ">> Who is want you see??" << endl;
		cout << "************************************************** Participants List **************************************************" << endl;

		for (int i = 0; i < People; i++) {
			cout << "["<< i + 1 << "]" << ": " << a[i].getName() << endl;
		}
		system("cls");
		cout << endl;
		cout << "***********************************************************************************************************************" << endl;
		cout << ">> ";
		cin >> name;

		system("cls");
		for (int i = 0; i < People; i++) {
			if (name == a[i].getName()) {
				cout << "****************************************** Welcome To " << name << "'s Notice Board!!" << "****************************************** " << endl;
				cout << ">> Who is best Commenter?" << endl;
				cout << "************************************************* Cheer Up Comment List ************************************************" << endl;
				cout << "[" << b.name << "]: " << b.comment << endl;
				cout << "***********************************************************************************************************************" << endl;
				string name;
				cin >> name;
				system("cls");

				if (name == b.name) {
					//점수 증가
				}
			}
			else {
				cout << ">> We don't find him :(" << endl;
			}
		}
		
	}
};
int main() {
	Manager a;
	Participant b[3];
	Viewer c;
	string position, name, tall, age, weight; 
	srand((unsigned int)time(0));
	cout << "********************************************** Input a Participant Profile *********************************************" << endl;
	cout << "등록할 사람을 입력하세요 [포지션, 이름, 키, 나이, 몸무게 순입니다] [3명입력 바랍니다.]" << endl;

	for (int i = 0; i < 3; i++) {
		cout << ">> ";
		cin >> position >> name >> tall >> age >> weight;
		b[i].setParticipant(position, name, tall, age, weight);
	}

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
			cout << "[7]: Back!\t";
			cout << "[8]: Exit!\t" << endl;
			cout << ">> ";
			cin >> num;

			system("cls");

			if (num == 7) {
				continue;
			}
			else if (num == 1) {
				;
			}
			else if (num == 2) {
				;
			}
			else if (num == 3) {
				a.comment(b, c);
			}
			else if (num == 4) {
				;
			}
			else if (num == 5) {
				;
			}
			else if (num == 6) {
				a.pheonix(b);
			}
			else if (num == 8) {
				break;
			}

			//입력 받고, 입력 번호에따른 상호작용
		}
		else if (num == 3) {
			break;
		}
		else {
			continue;
		}
	}
}
