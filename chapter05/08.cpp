#include<iostream>
#include<cstring>
using namespace std;
int main(void) {
	char word[100];
	int cnt(0);

	while (cin >> word, strcmp(word, "done") != 0) {
		cnt++;
	}
	cout << "�� " << cnt << "�ܾ �ԷµǾ����ϴ�.";
}
