#include<iostream>
using namespace std;
int main(void) {
	double customerA(100000);
	double customerB(100000);
	double customerAin = customerA * 0.1;
	int year(0);

	do {
		year++;
		customerA += customerAin;
		customerB = customerB * 1.05;

	} while (customerA > customerB);
	cout << "��B�� ��A�� ���ڰ�ġ�� �ʰ��ϴ� �⵵ : " << year << endl;
	cout << "�� A ���ڰ�ġ : " << customerA << endl;
	cout << "�� B ���ڰ�ġ : " << customerB << endl;
}
