#include<iostream>
#include<string>
using namespace std;
struct car {
	string brand;
	int year;
};

int main(void) {
	int repeat(0);
	cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
	cin >> repeat;
	car *myCar = new car[repeat];

	for (int i = 0; i < repeat; i++) {
		cin.get();
		cout << "�ڵ��� #" << i + 1 << ":\n";
		cout << "���۾�ü : ";
		getline(cin, myCar[i].brand);
		cout << "���۳⵵ : ";
		cin >> myCar[i].year;
	}
	cout << "\n���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";
	for (int i = 0; i < repeat; i++) {
		cout << myCar[i].year << "���� " << myCar[i].brand << endl;
	}
}