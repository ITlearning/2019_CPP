
#include "Participant.h"
using namespace std;

	Participant::Participant() { vote = 0; };
	Participant::Participant(string position, string name, string tall, string age, string weight) {
		this->position = position;
		this->name = name;
		this->tall = tall;
		this->age = age;
		this->weight = weight;
		vote = rand() % 100;
	}

	void Participant::votep() {
		this->vote++;
	}

	void Participant::PickVote() {
		this->vote += 2;
	}

	string Participant::getName() { return name; }
	string Participant::getPosition() { return position; }
	string Participant::getTall() { return tall; }
	string Participant::getAge() { return age; }
	string Participant::getWeight() { return weight; }
	int Participant::getVote() { return vote; }
	void Participant::setVote(int num) { this->vote = num; }
	void Participant::PlusVote(int num) { this->vote += num; }
	bool Participant::operator <(Participant& p) { return this->vote > p.vote; }
