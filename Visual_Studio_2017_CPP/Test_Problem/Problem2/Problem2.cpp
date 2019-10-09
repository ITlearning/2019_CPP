#include <iostream>
#include <string>
using namespace std;
int main() {
	char text[10000];
	char num[26] = { 0, };
	int count = 0;
	int alphabet = 97;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(text, 10000, ';');
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] > 64 && text[i] < 91) {
			text[i] = tolower(text[i]);
		}
		
		if (isalpha(text[i])) {
			switch (text[i]) {
			case 'a' :
				count++;
				num[0] += 1;
				break;
			case 'b' :
				count++;
				num[1] += 1;
				break;
			case 'c' :
				count++;
				num[2] += 1;
				break;
			case 'd' :
				count++;
				num[3] += 1;
				break;
			case 'e' :
				count++;
				num[4] += 1;
				break;
			case 'f' :
				count++;
				num[5] += 1;
				break;
			case 'g' : 
				count++;
				num[6] += 1;
				break;
			case 'h' :
				count++;
				num[7] += 1;
				break;
			case 'i' :
				count++;
				num[8] += 1;
				break;
			case 'j' :
				count++;
				num[9] += 1;
				break;
			case 'k' :
				count++;
				num[10] += 1;
				break;
			case 'l' :
				count++;
				num[11] += 1;
				break;
			case 'm' :
				count++;
				num[12] += 1;
				break;
			case 'n' :
				count++;
				num[13] += 1;
				break;
			case 'o' :
				count++;
				num[14] += 1;
				break;
			case 'p' :
				count++;
				num[15] += 1;
				break;
			case 'q' :
				count++;
				num[16] += 1;
				break;
			case 'r' :
				count++;
				num[17] += 1;
				break;
			case 's' :
				count++;
				num[18] += 1;
				break;
			case 't' :
				count++;
				num[19] += 1;
				break;
			case 'u' :
				count++;
				num[20] += 1;
				break;
			case 'v' :
				count++;
				num[21] += 1;
				break;
			case 'w' :
				count++;
				num[22] += 1;
				break;
			case 'x' :
				count++;
				num[23] += 1;
				break;
			case 'y' :
				count++;
				num[24] += 1;
				break;
			case 'z' :
				count++;
				num[25] += 1;
				break;
			}
		
		}
	}
	
	int j = 0;
	for (int i = 0; i < 26; i++) {
		cout << (char)alphabet++ << "\t" << "(" <<(int)num[i] << ")" << "\t:";
		j = 0;
		for (; j < num[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}