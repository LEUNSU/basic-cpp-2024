#include <iostream>
using namespace std;

class Myclass 
{
	int num;
public : 
	Myclass(int n) : num(n)		// 생성될 객체 num을 n으로 초기화해 준다.
	{
	// 복사생성자는 컴파일러에서 기본적으로 제공해 주기때문에 함수 정의할 필요없다.
	}
	void print() const
	{
		cout << "value : "<< num << endl;
	}
	Myclass operator+(const Myclass& ref)	// 연산자 오버로딩
	{
			Myclass i(num + ref.num);		// 새로운 객체 i 생성
			return i;
	}
};

int main()
{
	Myclass a(10);
	a.print();					// value : 10

	Myclass b(a);
	b.print();					// value : 10
	
	Myclass c = b;
	c.print();					// value : 10
	
	Myclass d = a + b + c;		
	d.print();					// value : 30
	return 0;
}