#include<iostream>
using namespace std;
struct inf {
	char fName[100];
	char lName[100];
	char grade;
	int year;
};
int main(void) {
	inf student;
	cout << "���� �۽�Ʈ ���� : ";
	cin.getline(student.fName, sizeof(student.fName));
	cout << "���� ��Ʈ ���� : ";
	cin.getline(student.lName, sizeof(student.lName));
	cout << "�л��� ���ϴ� ���� : ";
	cin >> student.grade;
	cout << "���� : ";
	cin >> student.year;

	cout << "���� : " << student.lName << ", " << student.fName << endl;
	cout << "���� : " << char(student.grade + 1) << endl;
	cout << "���� : " << student.year << endl;
}
