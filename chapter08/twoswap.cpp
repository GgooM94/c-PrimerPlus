#include<iostream>
using namespace std;



struct job
{
	char name[40];
	double salary;
	int floor;
};
template<typename T>
void Swap(T &a, T &b);
//����� Ư��ȭ
template<>void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main(void)
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int�� ��ȯ�⸦ ����ϸ�\n";
	Swap(i, j);
	cout << "���� i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan yaffee", 73000.60, 7 };
	job sideny = { "Sidney Taffee",78060.72, 9 };
	cout << "job ��ȯ�� : \n";
	Show(sue);
	Show(sideny);
	Swap(sue, sideny);
	cout << "job ��ȯ ��:\n";
	Show(sue);
	Show(sideny);
}

template<typename T>
void Swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<>void Swap<job>(job &j1, job &j2) {
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job &j) {
	cout << j.name << ": (" << j.floor << "���� ����)  $" << j.salary << endl;
}