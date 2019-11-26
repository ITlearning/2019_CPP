#pragma once
#include "Participant.h"
#include "Viewer.h"
static vector<Participant> Group;
using namespace std;

class Manager :public Viewer {
	int BP;
	int BV;
	string position, name, tall, age, weight;
public:
	void addP();
	void deleteP(Participant a);
	void graph(Participant a);
	void pheonix(vector<Participant> p);
	void comment(vector<Participant> a, Viewer b);
};
