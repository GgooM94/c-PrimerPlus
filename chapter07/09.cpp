#include<iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n)
{

	int i(0);
	for (i = 0; i < n; i++) {
		cout << "�̸� : ";
		cin >> pa[i].fullname;
		cout << "��� : ";
		cin >> pa[i].hobby;
	}
	return i;
};

void display1(student st) {
	cout << "�̸� : " << st.fullname << endl;
	cout << "��� : " << st.hobby << endl;
}
void display2(const student *pa) {
	cout << "�̸� : " << pa->fullname << endl;
	cout << "��� : " << pa->hobby << endl;
}
void display3(const student pa[], int size) {
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "�̸� : " << pa[i].fullname << endl;
		cout << i + 1 << "��� : " << pa[i].hobby << endl;
	}
}

int main(void) {
	cout << "�б��� �л� ���� �Է��Ͻʽÿ� : ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n') {
		continue;
	}

	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	cout << "\nDisplay1 ��� ���\n";
	for (int k = 0; k < entered; k++) { display1(ptr_stu[k]); }

	cout << "\nDisplay2 ��� ���\n";
	for (int k = 0; k < entered; k++) { display2(&ptr_stu[k]); }

	cout << "\nDisplay3 ��� ���\n";
	display3(ptr_stu, entered);

	cout << "���α׷��� �����մϴ�.\n";
}