#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public: 
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();	// �����Լ��� ����Ǹ� �����ͺ����� Ÿ���� �ƴ϶� �����ͺ����� ����Ű�� ��ü�� �����Ͽ� ȣ���Ѵ�.
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}