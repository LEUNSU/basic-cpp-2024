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
		cout << "내 이름은 " << name << "이고," << endl;
	}
	void HowOldAreYou() const
	{
		cout << "나이는 " << age << "이며," << endl;
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
		cout << "전화번호는 " << pNumber << "입니다." << endl;
	}
};

int main(void)
{
	MyInfo p("이은수", 26, "010-5171-3978");
	p.printMyinfo();
	return 0;
}