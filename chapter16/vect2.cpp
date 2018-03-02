#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Review
{
	string title;
	int rating;
};
bool FillReview(Review &rr);
void ShowReview(const Review & rr);

int main(void) {
	vector<Review> books;
	Review temp;
	while (FillReview(temp))
		books.push_back(temp);
	int num = books.size();
	if (num > 0) {
		cout << "�����մϴ�. ����� ������ ���� �Է��ϼ̽��ϴ�.\n���\n����\n";
		for (int i = 0; i < num; i++)
			ShowReview(books[i]);
		cout << "�ѹ� �� ����Ѵ�:\n���\t����\n";
		vector<Review>::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
		vector<Review>oldlist(books);

		if (num > 3) {
			//���� 2�� ����
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "������ ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
			
			//���� 1�� ����
			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "������ ��:\n";
			for (pr = books.begin(); pr != books.end(); pr++)
				ShowReview(*pr);
		}
		books.swap(oldlist);
		cout << "oldlist�� books�� ��ȯ�� ��:\n";
		for (pr = books.begin(); pr != books.end(); pr++)
			ShowReview(*pr);
	}
	else {
		cout << "�Է��� ���� ����, ���� ���� �����ϴ�.\n";
	}
}
bool FillReview(Review &rr) {
	cout << "å ������ �Է��Ͻʽÿ�(�������� quit�� �Է�): ";
	getline(cin, rr.title);
	if (rr.title == "quit")
		return false;
	cout << "å ���(0-10)d�� �Է��Ͻʽÿ�: ";
	cin >> rr.rating;
	if (!cin)
		return false;
	while (cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const Review &rr) {
	cout << rr.rating << "\t" << rr.title << endl;
}