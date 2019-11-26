#pragma once
#include "Participant.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#define People 3
using namespace std;

class Viewer {
public:
	int Pick;
	map< string, string > viewer;
	string name, comment;
	void vote(vector<Participant> p);
	void show(vector<Participant> p);
	void mypick(vector<Participant> p);
	void cheerup(vector<Participant> p);
};