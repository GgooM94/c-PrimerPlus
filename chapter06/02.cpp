#include<iostream>
#include<array>
#include<cctype>
const int MAX = 10;
using namespace std;
int main(void)
{
	array<double, MAX>arr;
	double num(0);
	int i(0), cnt(0);
	double sum(0), avg(0);
	cout << "��α� �Է�\n";
	while (i < MAX &&cin >> num) {
		arr[i++] = num;
		sum += num;
	}
	avg = sum / i;
	for (int k = 0; k < i; k++) {
		if (avg < arr[k])
			cnt++;
	}
	cout << "��α� ��� : " << avg << endl;
	cout << "��պ��� ū ��α� ���� : " << cnt;
}
