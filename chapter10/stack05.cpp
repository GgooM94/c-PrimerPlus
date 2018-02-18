#include<iostream>
#include"stack05.h"

Stack::Stack() {
	getMoney = 0;
	top = 0;
}
bool Stack::isempty()const {
	return top == 0;
}

bool Stack::isfull()const {
	return top == MAX;
}

bool Stack::push(const Item & item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else {
		std::cout << "�� �ڸ��� �����ϴ�.\n";
		return false;
	}
}
bool Stack::pop(Item & item) {
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
	{
		return false;
	}
}
void Stack::totMoney(double &money) {
	getMoney += money;
}
void Stack::showMoney() const {
	std::cout << "���� �ݾ� : " << getMoney << "��\n";
}