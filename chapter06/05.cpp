#include<iostream>
using namespace std;
void print() {
	cout << "5000 Ʈ���� ������ : 0%\n";
	cout << "�� ���� 10000 Ʈ���� ������ : 10%\n";
	cout << "�� �� ����20000 Ʈ���� ������ : 15%\n";
	cout << "35000 Ʈ���� �̻� ���ؼ��� : 20%\n";
}
int main(void) {
	print();

	int money(0), index(0);
	double result(0);
	cin >> money;
	while (money > 0) {
		if (money >= 35000) { index = 0; }
		else if (money > 15000) { index = 1; }
		else if (money > 5000) { index = 2; }
		else { index = 3; }
		switch (index)
		{
		case 0:
			result += (money - 35000) * 0.20;
			money -= (money - 35000);

		case 1:
			result += (money - 15000) * 0.15;
			money -= (money - 15000);

		case 2:
			result += (money - 5000) * 0.10;
			money -= (money - 5000);
		case 3:
			result += 0;
		}
		cout << result;
		cin >> money;
	}
}