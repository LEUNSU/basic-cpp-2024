#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)	// ������
	{	
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person & copy)		// ���������
	{	
		cout << "���� ��������� ȣ��" << endl;
//		this->name = other.name; ���� ����
//		this->age = other.age;
		this->name = new char[strlen(copy.name) + 1]; // ����� ��ü�� �̸��� �����ϱ� ���� �ʿ��� �޸𸮸� �������� �Ҵ��ϰ� �̸��� ����
		strcpy(this->name, copy.name);
		this->age = copy.age;		// ��� �� ��� ����. ����� ��ü�� ���̸� ����
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()	// �Ҹ���
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);	// Person Ŭ������ ��ü�� �����ϰ� �ʱ�ȭ
	Person man2 = man1;			// ���� �����ڸ� ȣ���Ͽ� ���ο� ��ü�� �ʱ�ȭ
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

int func(int a) {	// a = 10; num�� 10�� �����ؼ� ����Ѵ�.

	a = 10 + a;
	return a;		// a�� �����Ѵ�.
}

int num = 10;
int res = func(num); // int res = a;