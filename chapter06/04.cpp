#include<iostream>
using namespace std;
const int strsize = 100;
const int memberSize = 3;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;	// 0 = fullname, 1 = title, 2 = bopname
};
void menu() {
	cout << "Benevolent Order of Programmers\n";
	cout << "a. �Ǹ����� ����\t b. �������� ����\n";
	cout << "c. BOP ���̵�� ����\t d. ȸ���� ������ ������ ����\n";
	cout << "q. ����\n";
}

int main(void) {
	char ch;
	bop members[memberSize];
	members[0] = { "Wimp Macho","Wimp Title","Wimp Name", 0 };
	members[1] = { "Raki Rhodes","Raki Title","Raki Name", 1 };
	members[2] = { "Celia Laiter","Celia Title","Celia Name", 2 };

	menu();
	cin >> ch;

	while (ch != 'q') {
		for (int i = 0; i < memberSize; i++) {
			switch (ch)
			{
			case 'a':
				cout << members[i].fullname << endl;
				break;
			case 'b':
				cout << members[i].title << endl;
				break;
			case 'c':
				cout << members[i].bopname << endl;
				break;
			case 'd':

				switch (members[i].preference)
				{
				case 0:
					cout << members[i].fullname << endl;
					break;
				case 1:
					cout << members[i].title << endl;
					break;
				case 2:
					cout << members[i].bopname << endl;
					break;
				}
				break;

			default:
				cout << "a, b, c, d �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n";
				break;
			}
		}
		cin >> ch;
	}
}