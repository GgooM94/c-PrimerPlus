#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char fName[100];
	char lName[100];
	char result[100];

	cout << "���� �۽�Ʈ ���� : ";
	cin.getline(fName, sizeof(fName));
	cout << "���� ��Ʈ ���� : ";
	cin.getline(lName, sizeof(lName));

	strcpy_s(result, lName);
	strcat_s(result, ", ");
	strcat_s(result, fName);
	cout << result;

}

