#pragma once
#include "Participant.h"
#include "Viewer.h"

using namespace std;

class Manager :public Viewer {
	int BP;
	int BV;
	string position, name, tall, age, weight;
public:
	void addP(vector<Participant>& p);
	void deleteP(Participant a);
	void graph(Participant a);
	void pheonix(vector<Participant>& p);
	void comment(vector<Participant>& p, Viewer& b);
};
