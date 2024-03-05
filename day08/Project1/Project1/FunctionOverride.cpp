#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public: 
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third();	
	Second* sptr = tptr;	// Third타입 tptr이 가리키는 객체는 Second타입 포인터변수sptr 가리킴
	First* fptr = sptr;		//Second타입 sptr이 가리키는 객체는 First타입 포인터변수fptr 가리킴

	/*
	객체 포인터 타입을 기준으로 접근 범위가 결정된다.
	오버라이딩된 경우는 부모 것은 자식 것으로 가려진다.
	*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc(); 

	tptr->Second::MyFunc();
	delete tptr;
	return 0;
}