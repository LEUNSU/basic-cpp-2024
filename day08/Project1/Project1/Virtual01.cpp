#include <iostream>
using namespace std;

class Base 
{
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; } // virtualŰ���尡 ������ ��üŸ���� ���󰡰�, ������ ������Ÿ���� ���󰣴�.
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
	Base b;							// BaseŸ���� ��ü����
	Derived d;						// DerivedŸ���� ��ü����
	Base* pb = new Derived();		// BaseŸ���� ��ü ������


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

/* ���������Լ�
* �Լ��� ��ü�� ���ǵ��� ���� �����Լ�
* ���������Լ��� ���� Ŭ����(�߻�Ŭ����)�� ��ü�� ������ �� ����.
*/