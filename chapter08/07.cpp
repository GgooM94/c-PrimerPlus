#include<iostream>
using namespace std;

template<typename T>
T ShowArray(T arr[], int n);
template<typename T>
T ShowArray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void) {
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = {
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double *pd[3];

	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}
	cout << "Mr. E �� ��ü ��� ���� : \n";
	cout << ShowArray(things, 6) << "��" << endl;
	cout << "Mr. E�� ��ü ä�� ���� : \n";
	cout << ShowArray(pd, 3) << "��" << endl;
}
template<typename T>
T ShowArray(T arr[], int n) {
	cout << "���ø� A  :  ";
	T temp(0);
	for (int i = 0; i < n; i++) {
		temp += arr[i];
	}
	return temp;
}

template<typename T>
T ShowArray(T *arr[], int n) {
	cout << "���ø� B  :  ";
	T temp(0);
	for (int i = 0; i < n; i++) {
		temp += *arr[i];
	}
	return temp;
}