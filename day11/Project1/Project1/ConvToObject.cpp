//int a;
//cin >> a
//Grade(a)
//================================== =
//Person p = p1;		// ����
//p = p1;				// ����

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
	int b = a;	// ������ Ÿ��
	
	double d = 3.14
	a = d;	// Ÿ���� ����ġ (��Ģ�� ������ �ڷ����� ���Կ����� ����)
	d = a;
	*/
	Number num;
	num = 30;	// ��ġ���� �ʴ� �ڷ������� ���Կ��� -> �ӽð�ü ����. ������ Ÿ������ �� ��ȯ�� �̷���� 
	num.ShowNumber();
	return 0;
}
