//int a;
//cin >> a
//Grade(a)
//================================== =
//Person p = p1;		// 복사
//p = p1;				// 대입

#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{	
	/*
	int a =10;
	int b = a;	// 동일한 타입
	
	double d = 3.14
	a = d;	// 타입이 불일치 (원칙은 동일한 자료형만 대입연산이 가능)
	d = a;
	*/
	Number num;
	num = 30;	// 일치하지 않는 자료형간의 대입연산 -> 임시객체 생성. 동일한 타입으로 형 변환이 이루어짐 
	num.ShowNumber();
	return 0;
}
