#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string word;

	int cnt(0);
	while (cin >> word, word != "done") {
		cnt++;
	}
	cout << "�� " << cnt << "�ܾ �ԷµǾ����ϴ�.";
}