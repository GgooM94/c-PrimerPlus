using namespace std;
#include"string02.h"
int main(void) {
	String s1(" and I am a C++ Student.");
	String s2 = "���� �̸��� �Է��Ͻʽÿ�: ";
	String s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "���� ���ڿ�����\n" << s2 << "\n���� 'A'�� " << s2.has('A') << "�� ��� �ֽ��ϴ�.\n";

	s1 = "red";
	String rgb[3] = { String(s1),String("green"),String("blue") };
	cout << "���� ������� �̸��� �ϳ��� �Է��Ͻʽÿ� : ";
	String ans;
	bool success = false;
	while (cin >> ans) {
		ans.stringlow();
		for (int i = 0; i < 3; i++) {
			if (ans == rgb[i]) {
				cout << "�¾ҽ��ϴ�\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "�ٽ� �Է��Ͻʽÿ� : ";
	}
	cout << "���α׷��� �����մϴ�.\n";
}