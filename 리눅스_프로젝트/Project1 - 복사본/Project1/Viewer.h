#pragma once
#include "Participant.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
using namespace std;
class Viewer {
	int VoteNum = 0;
public:
	int Pick;
	int state = 0;
	map< string, string > viewer;
	string name, comment;
	void vote(vector<Participant>& p);
	void show(vector<Participant>& p);
	void mypick(vector<Participant>& p);
	void Rank(vector<Participant>& p);
	void cheerup(vector<Participant>& p);
	void showComment();
	int getVoteNum();
	void setVoteNum();
};