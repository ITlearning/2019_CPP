#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#define O = 0;
#define S = 1;
#define X = 2;
#define D = 3;
using namespace std;


class Grid{
	bool bValid;
	bool bStart;
	bool bDest;
	int x;
	int y;
public:
	bool isValid() { return bValid; }
	bool isStart() { return bStart; }
	bool inDest()  { return bDest;  }
	void setValid(bool val) { bValid = val; }
	void setStart(bool val) { bStart = val; }
	void setDest(bool val) { bDest = val; }
	void setX(int val) { x = val; }
	void setY(int val) { y = val; }
	int getX() { return x; }
	int getY() { return y; }
};

class Maze {
	int maze[5][5];
	int n;
	int q;
	int i;
public:
	Grid grid[5][5];
	Maze() {
		
		i = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				maze[i][j] = 0;
			}
		}
		maze[0][0] = 1;
		maze[4][4] = 3;
		while (i < 3) {
			n = rand() % 5;
			q = rand() % 5;
			if ((n == 0 && q == 0) || (n == 5 && q == 5)) {
				n = rand() % 5;
				q = rand() % 5;
			}
			maze[n][q] = 2;
			i++;
		}
	}

	void showMaze() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << maze[i][j] << ' ';
			}
			cout << endl;
		}
	}
};

class Car : public Grid {
protected:
	int x, y;
public:
	virtual void mode() = 0;
	void setX(int val) { this->x = val; }
	void setY(int val) { this->y = val; }
	int getX() { return this->x; }
	int getY() { return this->y; }
	bool final(Maze *p) {
		if (p->grid[this->x][this->y].isValid()) {
			return false;
		}
		else {
			setX(0);
			setY(0);
			return true;
		}
	}
};

void move() {

}

int main() {
	srand((unsigned)time(0));
	Maze maze;
	maze.showMaze();
}