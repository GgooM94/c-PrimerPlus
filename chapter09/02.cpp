#include<iostream>
#include<string>
void strcount(const std::string str);

int main(void) {
	using namespace std;
	string input;

	while (true) {
		cout << "�������� �� ���� �Է��Ͻʽÿ�.\n";
		getline(cin, input);
		if (input == "") {
			cout << "���α׷��� �����մϴ�.\n";
			break;
		}
		strcount(input);
	}
}
void strcount(const std::string str) {
	using namespace std;
	static int tot = 0;
	int count = 0;

	cout << "\"" << str << "\"���� ";
	count = size(str);
	tot += count;
	cout << count << "���� ���ڰ� �ֽ��ϴ�.\n";
	cout << "���ݱ��� �� " << tot << "���� ���ڸ� �Է��ϼ̽��ϴ�.\n\n";

}