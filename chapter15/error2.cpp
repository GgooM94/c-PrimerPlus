#include<iostream>
#include<cfloat>

bool hmean(double a, double b, double *ans);

int main(void) {
	double x, y, z;
	std::cout << "�� ���� �Է��Ͻʽÿ�: ";
	while (std::cin >> x >> y) {
		if (hmean(x, y, &z))
			std::cout << x << ", " << y << "�� ��ȭ����� " << z << "�Դϴ�.\n";
		else
			std::cout << "���� ������ �� ���� ��ȭ����� ���� �� ����.\n";
		std::cout << "�ٸ� �� ���� �Է��Ͻʽÿ�(��������q)";
	}
	std::cout << "���α׷��� �����մϴ�.\n";
}

bool hmean(double a, double b, double *ans) {
	if (a == -b) {
		*ans = DBL_MAX;
		return false;
	}
	else {
		*ans = 2.0 *a*b / (a + b);
		return true;
	}
}