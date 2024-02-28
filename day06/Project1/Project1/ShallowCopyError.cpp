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
	Person(const char* myname, int myage)
	{	
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person & copy)		// 복사생성자
	{	
		cout << "깊은 복사생성자 호출" << endl;
//		this->name = other.name; 얕은 복사
//		this->age = other.age;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;		// 멤버 대 멤버 복사
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

int func(int a) {	// a = 10; num의 10을 복사해서 사용한다.

	a = 10 + a;
	return a;		// a를 리턴한다.
}

int num = 10;
int res = func(num); // int res = a;