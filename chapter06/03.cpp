#include<iostream>
using namespace std;
void menu() {
	cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n";
	cout << "c) camera \tp) pianist\n";
	cout << "t) tree \tg) game\n";
}
int main(void) {
	menu();
	char ch;
	cin >> ch;
	while ('q' != ch) {
		switch (ch)
		{
		case 'c':
			cout << "camera ����\n";
			break;

		case 'p':
			cout << "pianist ����\n";
			break;

		case 't':
			cout << "tree ����\n";
			break;

		case 'g':
			cout << "game ����\n";
			break;

		default:
			cout << "c, p, t, g�߿��� �ϳ��� �����Ͻʽÿ�. (�������� q) :";
		}
		cin >> ch;
	}
}