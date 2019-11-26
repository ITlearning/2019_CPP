#include "Manager.h"
	void Manager::addP(vector<Participant>& p) {
		cout << "등록할 사람을 입력하세요 [포지션, 이름, 키, 나이, 몸무게 순입니다] " << endl;
		cout << ">> ";
		cin >> position >> name >> tall >> age >> weight;
		Participant A(position, name, tall, age, weight);
		p.push_back(A);
	}
	void Manager::deleteP(Participant a) {
		//참가자 삭제
		//for문으로 입력값 이름이랑, 참가자 이름이랑 비교하면서 일치하면 그 객체 삭제. 만약 참가자 이름이 없다면, 에러 입력 후 넘어감
	}
	void Manager::graph(Participant a) {
		//참가자의 등수 상승,하락 폭을 가시화 해줌 -
		//1주차 : 10위, 2주차 : 5위 ,뭐 이런식으로
	}
	void Manager::pheonix(vector<Participant>& p) {
		string name;
		int num;
		//관리자는, 모든 참가자의 투표수에 관여할 수 있음 (*조작 가능)
		//어떤참가자의 어떤부분을 조작할건지 묻고 실행
		//투표수를 조작하게 되면, 몇표 추가할건지, 뺄건지 정해서,참가자 객체 내의 vote 수 바꿔줌.
		cout << "조작 기능에 오신 것을 환영합니다." << endl;
		cout << "이 기능은 투표수 자체를 조작할 수도 있고 , 없앨수도 있는 기능입니다." << endl;
		cout << "어떤 사람의 투표수를 조작하고 싶으십니까?" << endl;
		for (int i = 0; i < p.size(); i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
		cout << ">>";
		cin >> name;
		for (int i = 0; i <	p.size(); i++) {
			if (p[i].getName() == name) {
				cout << "현재 " << p[i].getName() << " 의 투표수는 " << p[i].getVote() << " 입니다." << endl;
				cout << "투표수를 얼마나 바꾸고 싶으십니까? >> ";
				cin >> num;
				p[i].setVote(num);
				cout << "성공적으로 투표수를 바꾸었습니다. 변경된 투표수는 바로 적용됩니다." << endl;
			}
		}
	}
	void Manager::comment(vector<Participant>& p, Viewer& b) {
		string Pname;
		string Vname;
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
				cout << "마음에 드는 댓글을 쓴 사람을 뽑아주세요." << endl;
				cin >> Vname;
				system("cls");
				if (b.viewer.find(Vname) == b.viewer.end()) {
					cout << "없습니다." << endl;
				}
				else {
					p[i].PlusVote(10);
					cout << Vname << "님이 투표한 " << Pname << " 연습생에게 투표수를 증가시켰습니다." << endl;
				}
			}
		}
	}