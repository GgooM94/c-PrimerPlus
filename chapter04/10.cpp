#include<iostream>
#include<array>
using namespace std;
int main(void) {

	array<double, 3> result;
	cout << "40m �޸��� ����� 3�� �Է� :";
	cin >> result[0] >> result[1] >> result[2];
	double avg = (result[0] + result[1] + result[2]) / size(result);

	cout << "array : " << size(result) << endl;
	cout << "��� : " << avg;
}
