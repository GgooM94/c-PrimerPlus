#include<iostream>
#include"Person02.h"
Person::Person() {
	m_lanme = "";
	m_fname[0] = '\0';
}
Person::Person(const std::string &ln, const char *fn) {
	m_lanme = ln;
	strcpy_s(m_fname, fn);
}
void Person::Show() const {
	std::cout << "�̸� ���� ���� : " << m_lanme << " " << m_fname << std::endl;
}
void Person::formalShow() const {
	std::cout << "����, �̸� ���� : " << m_fname << " " << m_lanme << std::endl;
}
