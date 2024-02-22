#include <iostream>

/*using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num = 20;
	cout <<"Hello World!"<< endl;
	cout << "Hello " << "World!" << endl;
	cout <<num<<' '<< 'A';
	cout <<' '<<3.14<<endl;
	return 0;
}*/

/*using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;
	
	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}
*/

using namespace std;

int global = 100;	// 전역변수 - 프로그램 전체에서 사용가능
int global1 = 200;

int main()
{
	int val = 100;	// 지역변수 - 선언된 범위에서만 사용가능 
	global = 200;

	cout << "전역변수 : " << global << endl;
	cout << "지역변수 : " << val << endl;

	cout << "전역변수 : " << global1 << endl; // 지역변수와 이름이 동일할 경우는 전역변수는 가려진다.

	return 0;
}

void Func()
{	
	int val = 0;
	global = 10;
	global1 = 10;
	// val = 10; 메인 안에서만 가능 
}