#include<iostream>
#include"stack05.h"
#include<cctype>
int main(void) {
	Stack cus;
	customer people;
	bool open = true;
	while (open) {
		std::cout << "1 : New Customer\n2 : Customer Payment\n3 : Exit\n";
		int n;
		std::cin >> n;
		switch (n)
		{
		case 1 :
			if (cus.isfull())
				std::cout << "������ ���� �� �ֽ��ϴ�\n";
			else {
				std::cout << "Customer Fullname : ";
				std::cin >> people.fullname;
				std::cout << "Customer Payment : ";
				if (std::cin >> people.payment)
				{
					cus.push(people);
				}
				else {
					std::cout << "�ݾ��� �߸� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n";
					open = false;
				}
			}
			break;
		case 2:
			if (cus.isempty())
				std::cout << "������ ��� �ֽ��ϴ�.\n";
			else{
				cus.pop(people);
				std::cout << people.fullname << " Payment : " << people.payment << "����\n";
				cus.totMoney(people.payment);
				cus.showMoney();
			}
			break;

		case 3:
			open = false;
			break;
		default:
			std::cout << "�߸� �Է��ϼ̽��ϴ�.\n";
			break;

		}
		std::cout << std::endl;
	}



}