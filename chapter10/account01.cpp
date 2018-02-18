#include<iostream>
#include"account01.h"

Account::Account() {
	m_name = "�̸�";
	m_account = "���¹�ȣ";
	m_money = 0.0;
}
Account::Account(const string &name, const string &account, double money) {
	m_name = name;
	m_account = account;
	m_money = money;
}
void Account::show(void) const{
	std::cout << "������ : " << m_name << std::endl;
	std::cout << "���¹�ȣ : " << m_account << std::endl;
	std::cout << "�ܾ� : " << m_money <<"��"<< std::endl<<std::endl;
}
void Account::deposit(double cash) {
	if (cash < 0)
		std::cout << "�Ա� �ݾ��� 0���� ���� �� �����ϴ�.\n";
	else {
		std::cout << cash << "�� �Ա� �Ǿ����ϴ�.\n";
		m_money += cash;
	}
		
}
void Account::withdraw(double cash) {
	if (cash < 0)
		std::cout << "��� �ݾ��� 0���� ���� �� �����ϴ�.\n";
	else if (m_money < cash) {
		std::cout << "�ܾ� ����\n";
	}
	else{
		std::cout << cash << "�� ��� �Ǿ����ϴ�.\n";
		m_money -= cash;
	}
		
}

