/*
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)
	{
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}

	void personInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete[]name;
	}
};

int main(void)
{
	Person p("������", 26);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}
*/