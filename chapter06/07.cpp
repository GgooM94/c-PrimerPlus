#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(void)
{
	int consonant(0);
	int vowel(0);
	int cnt(0);
	string ch;
	cin >> ch;
	while (true) {
		if (ch[0] == 'q' && ch[1] == NULL)
			break;

		if (isalpha(ch[0])) {
			tolower(ch[0]);
			switch (ch[0])
			{
			case 'a':case 'e':case 'i':case 'o':case 'u':
				vowel++;
				break;
			default:
				consonant++;
			}
		}
		else {
			cnt++;
		}
		cin >> ch;
	}
	cout << "�������� �����ϴ� �ܾ� �� : " << vowel << endl;
	cout << "�������� �����ϴ� �ܾ� �� : " << consonant << endl;
	cout << "��Ÿ : " << cnt;
}