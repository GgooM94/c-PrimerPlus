#include<iostream>
#include<cctype>
#include"stack04.h"

int main(void)
{
	using namespace std;
	unsigned long po;
	int size;
	cout << "���� ������ : ";
	cin >> size;

	cout << "\nStack st(size) " << size << "ȸ POP\n";
	Stack st(size);
	for (int i = 0; i < size; i++) {
		po = i;
		if (st.isfull())
			cout << "������ ���� �� �ֽ��ϴ�.\n";
		else {
			st.push(po);
			cout << "# " << po << " PUSH.\n";
		}
		
	}
	cout << "\nStack test(st) " << size << "ȸ POP\n";
	Stack test(st);
	Stack testA;
	testA = test;
	for (int i = size-1; i >= 0; i--) {
		po = i;
		if (test.isempty())
			cout << "������ ��� �ֽ��ϴ�.\n";
		else {
			test.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
	cout << "\nStack testA = test " << size << "ȸ POP\n";
	for (int i = size-1; i >= 0; i--) {
		po = i;
		if (testA.isempty())
			cout << "������ ��� �ֽ��ϴ�.\n";
		else {
			testA.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
	cout << "\nStack st "<<size<<"ȸ POP\n";
	for (int i = size-1; i >=0; i--) {
		po = i;
		if (st.isempty())
			cout << "������ ��� �ֽ��ϴ�.\n";
		else {
			st.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
}