#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;	//&ob -> �ּҿ����� : ��ü ob�� �ּҸ� ��Ÿ���� ��ɾ� (���������ڴ� ������ ��)
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple temRef = SimpleFuncObj(obj);
	cout << "Return Obj" << &temRef << endl;
	return 0;
}

/*
New Object: 0000001C4C2FF8F4 : ��üobj �ּ�
New Copy obj: 0000001C4C2FF9F4 : ��üob �ּ�
Parm ADR: 0000001C4C2FF9F4 : ��üob �ּ�
New Copy obj: 0000001C4C2FFA34 : �ӽð�ü �ּ�
Destroy obj: 0000001C4C2FF9F4  : ��üob �Ҹ�
Destroy obj: 0000001C4C2FFA34  : �ӽð�ü �Ҹ�

New Copy obj: 0000001C4C2FFA54  : ��üob�ּ�
Parm ADR: 0000001C4C2FFA54 : ��üob �ּ�
New Copy obj: 0000001C4C2FF914 : �ӽð�ü �ּ�
Destroy obj: 0000001C4C2FFA54 : ��üob �Ҹ�
Return Obj0000001C4C2FF914 : �ӽð�ü �ּ� 
Destroy obj: 0000001C4C2FF914 : �ӽð�ü �Ҹ�
Destroy obj: 0000001C4C2FF8F4 : ��ü obj �Ҹ�
*/