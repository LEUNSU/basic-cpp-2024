#include <iostream>

using namespace std;

int main()
{
	const int num = 10;	// num������ ���ȭ��Ų��.
	// num = 100;	// num�� ����̹Ƿ� ������ �� ����.

	int num1 = 10;	
	int *pnum1;		// �����ͺ��� ���� : ������(�ּ�)���� pnum1 ����. ���� �κп��� *�� �ƹ� �ǹ̾��� ��ȣ
	pnum1 = &num1;	// ���� num1�� �ּҰ��� �����ͺ��� pnum1�� �����Ѵ�.

	cout << "num�� ����� �� : " << num << endl;
	cout << "num1�� ����� �� : " << num1 << endl;
	cout << "num1�� �ּҰ� : " << &num1 << endl;
	cout << "pnum1�� ����� �� : " << pnum1 << endl;
	cout << "pnum1�� ����� ���� ������ : " << *pnum1 << endl;	// �ڵ� �κп��� *�� ����Ű�� ���� ������

	return 0;
}

/* C���� �޸�
1. ���� : ��������, �Ű�����
2. heap : ����ڿ��� �Ҵ�� ����
	����� �ҷ��� malloc()(C++: new)���� �Ҵ��� �޴´� - free()(C++:delete)��ȯ
3. data : �Լ�, ��������, ���, ���ڸ��ͷ�

*/