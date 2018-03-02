#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;

void outint(int n) { cout << n << " "; }

int main(void) {
	list<int>one(5, 2);
	int stuff[5] = { 1,2,4,8,6 };
	list<int>two;
	two.insert(two.begin(), stuff, stuff + 5);
	int more[6] = { 6,4,2,4,6,5 };
	list<int>three(two);
	three.insert(three.end(), more, more + 6);

	cout << "List one : ";
	for_each(one.begin(), one.end(), outint);
	cout << endl << "List two : ";
	for_each(two.begin(), two.end(), outint);
	cout << endl << "List three : ";
	for_each(three.begin(), three.end(), outint);
	three.remove(2);
	cout << endl << "List three���� 2���� �輼 : ";
	for_each(three.begin(), three.end(), outint);

	//����
	three.splice(three.begin(), one);
	cout << endl << "���� ���� ����Ʈ three : ";
	for_each(three.begin(), three.end(), outint);
	cout << endl << "List one : ";
	for_each(one.begin(), one.end(), outint);

	//����ȭ
	three.unique();
	cout << endl << "����ȭ ���� ���� three : ";
	for_each(three.begin(), three.end(), outint);

	//���� , ����ȭ
	three.sort();
	three.unique();
	cout << endl << "���İ� ����ȭ ������ ����Ʈ three : ";
	for_each(three.begin(), three.end(), outint);

	two.sort();
	three.merge(two);
	cout << endl << "���ĵ� ����Ʈ two�� ����Ʈ three�� �պ� : ";
	for_each(three.begin(), three.end(), outint);
	cout << endl;
}