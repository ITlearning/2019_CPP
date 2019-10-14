#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int top;
	int max;
	int *stack;
public :
	IntStack(int n) { stack = new int[n]; max = n; top = -1; }

	 bool push(int n) {
		 if (top == max) return false;
		 else {
			 top++;
			 stack[top] = n;
			 return true;
		 }
		
	}
	bool pop(int &n) {
		 if (top < 0) return false;
		 else {
			 n = stack[top];
			 top--;
			 return true;
		 }
	 }

 int size() {
		return top+1;
	}
};

int main() {
	IntStack stack(50);
	int n;
	int size = 0;
	cout << "���ÿ� ���� ����(1~5)�� �Է��ϼ���. >> ";
	cin >> size;
	cout << "���ÿ� ���� ���� �Է��ϼ��� >>";
	for (int i = 0; i < size; i++) {
		cin >> n;
		stack.push(n);
	}

	cout << "���� �� �ִ� ������ ���� : " << stack.size() << endl;

	cout << "���� �ִ� ������ POP �� ��� >> ";
	for (int i = 0; i < size; i++) {
		stack.pop(n);
		cout << n << ' ';
	}
}