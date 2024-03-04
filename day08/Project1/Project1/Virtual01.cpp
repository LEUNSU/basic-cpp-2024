#include <iostream>
using namespace std;

class Base 
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; } // virtual키워드가 있으면 객체타입을 따라가고, 없으면 포인터타입을 따라간다.
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }
};

class Derived : public Base 
{
public:
	void func1() { cout << "Derived::func1()" << endl; }
	void func3() { cout << "Derived::func2()" << endl; }
	void func4() { cout << "Derived::func3()" << endl; }

	Derived() = default;
};

int main()
{
	Base b;							// Base타입의 객체변수
	Derived d;						// Derived타입의 객체변수
	Base* pb = new Derived();		// Base타입의 객체 포인터


	pb->func1();
	pb->func2();
	pb->func3(); 

	cout << endl;
	Derived* pd = &d;
	pd->func1();
	pd->func2();
	pd->func3();
	pd->func4();

	delete pb;
	return 0;
}

/* 순수가상함수
* 함수의 몸체가 정의되지 않은 가상함수
* 순수가상함수를 가진 클래스(추상클래스)는 객체를 생성할 수 없다.
*/