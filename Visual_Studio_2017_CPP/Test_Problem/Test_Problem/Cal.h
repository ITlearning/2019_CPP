#ifndef CAL_H
#define CAL_H

class Add {
public:

	int a;
	int b;
	void setValue(int x, int y);
	int calculate();
};


class Sub {
public :
	int a;
	int b;
	void setValue(int x, int y);
	int calculate();
};

class Mul {
public:
	int a;
	int b;
	void setValue(int x, int y);
	int calculate();
};

class Div {
public :
	int a;
	int b;
	void setValue(int x, int y);
	int calculate();
};
#endif // !CAL_H
