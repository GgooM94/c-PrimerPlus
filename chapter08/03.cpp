#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void uppper(string &std) {
	for (int i = 0; i < std.length(); i++) {
		std[i] = toupper(std[i]);
	}
	cout << std << endl;
}

int main(void) {
	string std;
	cout << "���ڿ��� �Է��Ͻÿ� (�������� q) :";
	getline(cin, std);

	while (std.length() != 1 || std[0] != 'q') {
		uppper(std);
		cout << "���ڿ��� �Է��Ͻÿ� (�������� q) :";
		getline(cin, std);
	}
	cout << "��." << endl;
}