#include<iostream>
#include<cstdlib>
#include<ctime>
#include<typeinfo>

using namespace std;

class Grand {
private:
	int hold;
public:
	Grand(int h = 0) :hold(h) {}
	virtual void Speak() const { cout << "���� Grand Ŭ�����̴�!\n"; }
	virtual int Value() const { return hold; }
};

class Superb :public Grand {
public:
	Superb(int h = 0):Grand(h){}
	void Speak() const { cout << "���� Superb Ŭ�����̴�!!\n"; }
	virtual void Say() const {
		cout << "���� ������ �ִ� Superb ���� " << Value() << "�̴�.\n";
	}
};

class Magnificent :public Superb {
private:
	char ch;
public:
	Magnificent(int h = 0, char c = 'A') :Superb(h), ch(c) {}
	void Speak() const { cout << "���� Magnificent Ŭ�����̴�!!!\n"; }
	void Say() const { cout << "���� ������ �ִ� ���ڴ� " << ch << "�̰�, ������ " << Value() << "�̴�.\n"; }
};

Grand *GetOne();

int main(void) {
	srand(time(0));
	Grand *pg;
	Superb *ps;
	for (int i = 0; i < 5; i++) {
		pg = GetOne();
		cout << "���� " << typeid(*pg).name() << "���� ó���ϰ� �ֽ��ϴ�.\n";
		pg->Speak();
		if (ps = dynamic_cast<Superb *>(pg))
			ps->Say();
		if (typeid(Magnificent) == typeid(*pg))
			cout << "�׷�, �ʾ߸��� ��¥ Magnificent Ŭ�����̴�.\n";
	}
}
Grand *GetOne() {
	Grand *p;
	switch(std::rand() % 3)
	{
	case 0:
		p = new Grand(std::rand() % 100);
		break;
	case 1:
		p = new Superb(std::rand() % 100);
		break;
	case 2:
		p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
		break;
	default:
		p = new Grand(std::rand() % 100);
	}
	return p;
}