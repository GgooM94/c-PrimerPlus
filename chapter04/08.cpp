#include<iostream>
#include<string>
using namespace std;
struct pizzaInf {
	string brand;
	double width;
	double kg;
};

int main(void)
{
	pizzaInf *brand01 = new pizzaInf;

	cout << "���� ���� : ";
	cin >> brand01->width;
	cin.get();
	cout << "���� ȸ�� : ";
	getline(cin, brand01->brand);

	cout << "������ �߷� : ";
	cin >> brand01->kg;

	cout << "���� ȸ�� : " << brand01->brand << endl;
	cout << "���� ���� : " << brand01->width << endl;
	cout << "������ �߷� : " << brand01->kg << endl;
	delete brand01;
}
