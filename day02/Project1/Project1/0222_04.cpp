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

int global = 100;	// �������� - ���α׷� ��ü���� ��밡��
int global1 = 200;

int main()
{
	int val = 100;	// �������� - ����� ���������� ��밡�� 
	global = 200;

	cout << "�������� : " << global << endl;
	cout << "�������� : " << val << endl;

	cout << "�������� : " << global1 << endl; // ���������� �̸��� ������ ���� ���������� ��������.

	return 0;
}

void Func()
{	
	int val = 0;
	global = 10;
	global1 = 10;
	// val = 10; ���� �ȿ����� ���� 
}