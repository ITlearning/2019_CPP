#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	Random();
	void next();
	void nextRange(int, int);
};

Random::Random() {

}

void Random::next() {
	 srand((unsigned int)time(0));
}

void Random::nextRange(int a, int b) {
	rand() % (b - a + 1) + a;
}

int main() {
	Random 
}