#include<iostream>
#include<string>
using namespace std;
struct inf {
	string fName;
	string lName;
	char grade;
	int year;
};
int main(void) {
	inf student;
	cout << "���� �۽�Ʈ ���� : ";
	getline(cin, student.fName);
	cout << "���� ��Ʈ ���� : ";
	getline(cin, student.lName);
	cout << "�л��� ���ϴ� ���� : ";
	cin >> student.grade;
	cout << "���� : ";
	cin >> student.year;

	cout << "���� : " << student.lName << ", " << student.fName << endl;
	cout << "���� : " << char(student.grade + 1) << endl;
	cout << "���� : " << student.year << endl;
}
