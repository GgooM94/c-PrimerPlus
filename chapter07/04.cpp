#include<iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main(void)
{
	double tot, tot1, choices, choices1;
	long double res;
	cout << "�׶����� �·� ���� �Դϴ�.\n";
	cout << "ù ��° ���� ������ �̴� ��, �� ��° ���� ������ �̴� ���� �Է����ּ���. :\n";
	while ((cin >> tot >> choices >> tot1 >> choices1) && choices <= tot) {
		cout << "����� �̱� Ȯ���� ";
		res = probability(tot, choices);
		res = res * probability(tot1, choices1);
		cout << res;
		cout << "�� �߿��� �� ���Դϴ�.\n";
		cout << " �ٽ� �� ���� �Է��Ͻʽÿ�. (�������� q�� �Է�) :";
	}
	cout << "���α׷��� �����մϴ�\n";
}
long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}