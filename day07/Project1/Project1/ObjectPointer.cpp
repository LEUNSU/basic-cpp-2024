/*
Person* ptr;				// PersonŸ���� ��ü ������ ����
Person* ptr = new Person;	// o
Person p = new Person();	// x
*/
#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
	// void Sleep() { cout << "Student Sleep" << endl; } ��Ӱ��迡�� ������ ����Լ��� ���� �� -> �����ε�
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{	
	// Student* ptr1 = new Student();	������ Ÿ������ ����ϴ� ���� ��Ģ�̴�.
	// �θ�Ÿ���� ��ü �����ͷ� �ڽİ�ü�� ����ų �� �ִ�. ������ �ڽİ�ü �����ͷ� �θ�ü�� ����ų �� ����.
	Person* ptr1 = new Student();		
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Sleep();	// �׸��� ������ ��ü �������� Ÿ���� ������.
	ptr3->Study();
	delete ptr1;delete ptr2;delete ptr3;
	return 0;
}

/*
������
�����ε�(Overloading) - ��������
�������̵�(Overriding) - ������, ��Ӱ��迡�� ���
*/