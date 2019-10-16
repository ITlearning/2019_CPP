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

class MyQueue : public BaseArray {
	int num, push;
public:

	MyQueue(int x) : BaseArray(x) {
		this->num = 0;
		this->push = 0;
	}
	void enqueue(int n) {
		if (num != 100) {
			put(num++, n);
		}
		else {
			cout << "���̻� ���� �� �����ϴ�." << endl;
		}
		
		
	}

	int dequeue() {
		if (num-- != 0) {
			return get(push++);
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
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮: " << mQ.capacity() << ", ť�� ũ�� :" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ� >> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}