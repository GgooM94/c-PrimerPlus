#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string fName;
	string lName;
	string result;

	cout << "���� �۽�Ʈ ���� : ";
	getline(cin, fName);
	cout << "���� ��Ʈ ���� : ";
	getline(cin, lName);

	result = lName + ", " + fName;
	cout << result;

}