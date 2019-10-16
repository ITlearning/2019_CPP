#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; //�迭�� ũ��
	int *mem; //���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray {
	int num;
public:

	MyStack(int x) : BaseArray(x) {
		this->num = 0;
	}
	void push(int n) {
		if (num != 100) {
			put(num++, n);
		}
		else {
			cout << "���̻� ���� �� �����ϴ�." << endl;
		}


	}

	int pop() {
		if (num != 0) {
			return get(--num);
		}
		else {
			cout << "���̻� �������� �����ϴ�." << endl;
		}
	}

	int length() {
		return num;
	}

	int capacity() {
		return getCapacity();
	}
};

int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "������ �뷮: " << mStack.capacity() << ", ������ ũ�� :" << mStack.length() << endl;
	cout << "������ ���Ҹ� ������� �����Ͽ� ����Ѵ� >> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;
}