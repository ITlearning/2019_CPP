#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Participant {
	string position, name, tall, age, weight;
	int vote;//각자의 투표수
public:
	Participant();
	Participant(string position, string name, string tall, string age, string weight);
	void setParticipant(string position, string name, string tall, string age, string weight);
	void votep();
	void PickVote();

	string getName();
	string getPosition();
	string getTall();
	string getAge();
	string getWeight();
	int getVote();
	void setVote(int num);
	bool operator <(Participant& p);

};