#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
bool FillName(string &name);
void show(const string &t);
int main(void) {
	vector<string>Mat;
	vector<string>Pat;
	vector<string>Merge;
	
	string name;

	cout << "�Է� ���� : quit\n";
	cout << "Mat�� ģ�� �̸� : \n";
	getline(cin, name);
	while (FillName(name)) {
		Mat.push_back(name);
		getline(cin, name);
	}
	cout << "Pat�� ģ�� �̸� : \n";
	getline(cin, name);
	while (FillName(name)) {
		Pat.push_back(name);
		getline(cin, name);
	}

	//Mat �� Pat �պ� �� Set�� ����
	Merge = Mat;
	Merge.insert(Merge.end(), Pat.begin(), Pat.end());
	set<string>MergeSet(Merge.begin(), Merge.end());

	//���� �� ���
	sort(Mat.begin(), Mat.end());
	sort(Pat.begin(), Pat.end());
	vector<string>::iterator it;
	for (it = Mat.begin(); it != Mat.end(); it++)
		show(*it);
	cout << endl;
	for (it = Pat.begin(); it != Pat.end(); it++)
		show(*it);
	cout << endl;
	
	ostream_iterator<string, char>out(cout, " ");
	copy(MergeSet.begin(), MergeSet.end(),out);
}
bool FillName(string &na) {
	if (na == "quit")
		return false;
	return true;
}
void show(const string &t) {
	cout << t << " ";
}