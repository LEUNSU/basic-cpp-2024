#include <iostream>

using namespace std;
/*
	swap�Լ� �����ϱ�
*/

void swap(int *a, int *b)	// �ּҸ� ���� �� �ִ� �����ͺ����� ����
{
	int temp;
	temp = * a;				// �ּ��� �����͸� ����
	*a =  *b;
	*b = temp;
}

int main()
{	
	int a = 10;	// ��������
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);		// ������ �ּҸ� ����

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}
/*
A& B	// ��Ʈ������ : A�� B�� ���� ������ �ض�.
A&& B	// �������� - ���� : A�� ���̰� B�� ���� ��� ����� ��

int& num2 = num1;
int& num2 = 100;


int num = 10;	// �Ϲ����� ���� ����
int* ptr = &num1;            
int& num2 = num1;
*/