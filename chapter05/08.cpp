#include<iostream>
#include<cstring>
using namespace std;
int main(void) {
	char word[100];
	int cnt(0);

	while (strcmp(word, "done") != 0) {
		cin >> word;
		cnt++;
	}
	cout << "�� " << cnt - 1 << "�ܾ �ԷµǾ����ϴ�.";
}
