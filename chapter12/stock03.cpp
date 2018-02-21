#include"stock03.h"

Stock::Stock() {
	len = 5;
	company = new char[len+1];
	strcpy_s(company, len+1,"GgooM");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}


Stock::Stock(const char *com, long n, double pr) {
	len = strlen(com);
	company = new char[len + 1];
	strcpy_s(company, len + 1, com);

	if (n < 0) {
		std::cout << "�ֽ� ���� ������ �� �� �����Ƿ�, " << company << " Sharer�� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else
		shares = n;
	
	share_val = pr;
	set_tot();
}
Stock::~Stock() {
	delete[] company;
}
void Stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0) {
		cout << "�ŵ� �ֽ� ���� ������ �� �� �����Ƿ�, �ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price) {
	share_val = price;
	set_tot();
}
const Stock & Stock::topval(const Stock &s)const {
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

std::ostream&operator<<(std::ostream &os, const Stock & st) {
	using std::ios_base;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);

	os << "ȸ��� : " << st.company << " �ֽ� �� : " << st.shares << std::endl;
	os << " �ְ� : $" << st.share_val;
	os.precision(2);
	os << "�ֽ� �� ��ġ : $" << st.total_val << std::endl;
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}