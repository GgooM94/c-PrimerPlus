#include<memory>
#include<iostream>
#include<string>

class Report {
private:
	std::string str;
public:
	Report(const std::string s) :str(s) {
		std::cout << "��ü�� �����Ǿ����ϴ�!\n";
	}
	~Report() { std::cout << "��ü�� �����Ǿ����ϴ�!\n"; }
	void comment() const { std::cout << str << "\n"; }
};

int main(void) {
	{
		std::auto_ptr<Report>ps(new Report("auto_ptr"));
		ps->comment();
	}
	{
		std::shared_ptr<Report>ps(new Report("shared_ptr"));
		ps->comment();
	}
	{
		std::unique_ptr<Report>ps(new Report("unique_ptr"));
		ps->comment();
	}
}