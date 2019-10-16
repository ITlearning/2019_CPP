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
	cout << "스택에 쌓을 개수(1~5)를 입력하세요. >> ";
	cin >> size;
	cout << "스택에 쌓을 수를 입력하세요 >>";
	for (int i = 0; i < size; i++) {
		cin >> n;
		stack.push(n);
	}

	cout << "현재 들어가 있는 스택의 개수 : " << stack.size() << endl;

	cout << "현재 있는 스택을 POP 한 결과 >> ";
	for (int i = 0; i < size; i++) {
		stack.pop(n);
		cout << n << ' ';
	}
}