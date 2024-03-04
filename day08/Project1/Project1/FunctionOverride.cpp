#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public: 
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();	
	Second* sptr = tptr;	// ThirdŸ�� tptr�� ����Ű�� ��ü�� SecondŸ�� �����ͺ���sptr ����Ŵ
	First* fptr = sptr;		//SecondŸ�� sptr�� ����Ű�� ��ü�� FirstŸ�� �����ͺ���fptr ����Ŵ

	/*
	��ü ������ Ÿ���� �������� ���� ������ �����ȴ�.
	�������̵��� ���� �θ� ���� �ڽ� ������ ��������.
	*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc(); 

	tptr->Second::MyFunc();
	delete tptr;
	return 0;
}