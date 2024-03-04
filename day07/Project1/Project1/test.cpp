#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage)
	{
		age = myage;
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "�� �̸��� " << name << "�̰�," << endl;
	}
	void HowOldAreYou() const
	{
		cout << "���̴� " << age << "�̸�," << endl;
	}
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* myNumber)
		: Myclass(myname, myage)
	{
		strcpy(pNumber, myNumber);
	}
	void printMyinfo() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;
	}
};

int main(void)
{
	MyInfo p("������", 26, "010-5171-3978");
	p.printMyinfo();
	return 0;
}