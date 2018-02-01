#include<iostream>
using namespace std;
const int SIZE = 10;
int Fill_array(double num[], int size) {
	int i(0);
	while (i < size && (cin >> num[i])) {
		i++;
	}
	return i;
}

void Show_array(double num[], int size) {
	for (int i = 0; i < size; i++) {
		cout << num[i] << "  ";
	}
}

void Reverse_array(double num[], int size) {
	int begin(0);
	int end(size - 1);
	double temp(0);

	for (; begin < end; begin++, end--) {
		temp = num[begin];
		num[begin] = num[end];
		num[end] = temp;
	}
}

int main(void) {
	double num[SIZE];
	int i(0);
	int cnt = Fill_array(num, SIZE);
	cout << "�迭�� ũ�� : " << cnt << endl;

	cout << "\n�迭�� ����\n";
	Show_array(num, cnt);

	cout << "\n\nReverse ����\n";
	Reverse_array(num, cnt);
	Show_array(num, cnt);

	cout << "\n\nù ���ҿ� ������ ���Ҹ� ������ Reverse ����\n";
	Reverse_array(num + 1, cnt - 2);
	Show_array(num, cnt);

}