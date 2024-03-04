/*
Person* ptr;				// Person타입의 객체 포인터 선언
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
	// void Sleep() { cout << "Student Sleep" << endl; } 상속관계에서 동일한 멤버함수를 쓰는 것 -> 오버로딩
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{	
	// Student* ptr1 = new Student();	동일한 타입으로 사용하는 것이 원칙이다.
	// 부모타입의 객체 포인터로 자식객체를 가리킬 수 있다. 하지만 자식객체 포인터로 부모객체는 가리킬 수 없다.
	Person* ptr1 = new Student();		
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Sleep();	// 그리고 접근은 객체 포인터의 타입을 따른다.
	ptr3->Study();
	delete ptr1;delete ptr2;delete ptr3;
	return 0;
}

/*
다형성
오버로딩(Overloading) - 다중정의
오버라이딩(Overriding) - 재정의, 상속관계에서 사용
*/