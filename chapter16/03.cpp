#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
const int MAX = 6;
int reduce(long ar[], int n);
int main(void) {

	long ar[MAX] = { 10,20,15,16,15,15 };
	for (int i = 0; i < MAX; i++)
		cout << ar[i]<<" ";
	cout << endl;
	cout << "����� �迭 ũ�� : "<<reduce(ar, MAX);
}
int reduce(long ar[], int n) {
	ostream_iterator<long, char>out(cout, " ");
	set<long> temp(ar,ar+n);
	return temp.size();
}
