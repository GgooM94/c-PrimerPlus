#include<iostream>
using namespace std;
const int MAX = 5;

double *fill_array(double ar[], int limit);
void show_array(const double ar[], double *n);
void revalue(double r, double ar[], double *n);

int main(void) {
	double properties[MAX];
	double *size = fill_array(properties, MAX);
	show_array(properties, size);
	if (*(size - 1) >0) {
		cout << "�������� �Է��Ͻʽÿ� : ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�߸� �Է��߽��ϴ�, ��ġ�� �Է��ϼ��� : ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}

	cout << "���α׷��� �����մϴ�.\n";
	cin.get();
	cin.get();
}

double *fill_array(double ar[], int limit) {
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << (i + 1) << "�� �ε����� ���� : $ ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�Է� �ҷ�, �Է� ������ �����ڽ��ϴ�. \n";
			break;
		}
		else if (temp < 0) {
			break;
		}
		ar[i] = temp;
	}
	return &ar[i];
}

void show_array(const double ar[], double *n) {
	for (int i = 0; &ar[i] != n; i++) {
		cout << (i + 1) << "�� �ε��� : $ ";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], double *n) {
	for (int i = 0; &ar[i] != n; i++)
	{
		ar[i] *= r;
	}
}