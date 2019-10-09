#include <iostream> 
using namespace std;

int main() {
	int i, a, b, sum = 0;
	cout << "두 개의 정수 입력 :";
	cin >> a >> b;

	i = a;
	while (i <= b) {	//i 가 b보다 작거나 같을때 까지 반복
		sum += i;
		i++;
	}

	cout << a << "에서 " << b << " 까지의 합은 " << sum;
		
		
}