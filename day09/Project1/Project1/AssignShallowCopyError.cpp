#define _CRT_SECURE_NO_WARNINGS 
# include <iostream>
# include <cstring>
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

	Person& operator=(const Person& ref)	// 깊은 복사
	{
		delete[]name;						//메모리 누수를 막기위한 메모리 해제 연산. "Youn ji yul"이 저장된 공간을 반환한다.
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Youn ji yul", 22);
	man2 = man1;		// 디폴트 대입연산자 호출(멤버 대 멤버복사 -> 얕은 복사)
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}