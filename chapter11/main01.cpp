#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vect01.h"

int main(void) {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	int MAX(0);
	

	cout << "��ǥ �Ÿ��� �Է��Ͻʽÿ�(�������� q) : ";
	while (cin >> target)
	{
		cout << "������ �Է��Ͻʽÿ� : ";
		if (!(cin >> dstep))
			break;

		cout << "�õ� Ƚ�� : ";
		if (!(cin >> MAX))
			break;
		double maxSteps(0);
		double minSteps(pow(target / dstep, 2));
		double avgSteps(0);
		double totSteps(0.0);
		for (int i = 0; i < MAX; i++) {
			steps = 0;
			result.reset(0.0, 0.0);

			while (result.magval() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if (maxSteps < steps)
				maxSteps = steps;
			if (minSteps > steps)
				minSteps = steps;
		
			totSteps += steps;	
		}

		avgSteps = totSteps / MAX;
		cout << MAX << "�� �õ� ��� : " << "��� : " << avgSteps << "   �ְ� : " << maxSteps << "   ����   : " << minSteps << endl<<endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "��ǥ �Ÿ��� �Է��Ͻʽÿ�(�������� q) : ";
	}
	cout << "���α׷��� �����մϴ�.\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
}
