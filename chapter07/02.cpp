#include<iostream>
using namespace std;
const int MAX(10);
int main(void) {
	int score[MAX];
	int avg(0), tot(0);

	cout << "���� ���ھ �Է����ּ���. (�ִ� 10��)\n";

	int i(0);
	while (i < MAX) {
		cin >> score[i];
		if (score[i] < 0) { break; }
		tot += score[i];
		i++;
	}

	for (int k = 0; k < i; k++) {
		cout << score[k] << "\t";
	}
	avg = tot / i;
	cout << "��� : " << avg;
}