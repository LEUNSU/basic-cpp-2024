#include <iostream>
#include <string.h>
using namespace std;

class Simple
{
public:
	Simple()								// ������(Ŭ�����̸��� ���� �޼���) 
	{
		cout << "I'm simple constuctor!" << endl;
	}
};

int main(void)
{
	cout << "case1: ";
	Simple* sp1 = new Simple;				// new �����ڸ� ���� ��ü����
	// Aaa *ap = new Aaa;
	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); // malloc �Լ��� �޸𸮿� �Ҵ� 

	cout << endl << "end of main" << endl;
	delete sp1;								// �������� �Ҵ�� ��ü�� ����, ��ü�� ��ȯ�Ѵ�.
	free(sp2);								// malloc�� �Ҵ�� �޸𸮸� ����
	return 0;
}

/*
1. delete ������ �������� �Ҵ�� ��ü�� �����ϰ� �ش� ��ü�� �Ҹ��ڸ� ȣ��.
2. malloc �Լ��� �Ҵ�� �޸𸮿� ���� -> free �Լ��� ȣ���Ͽ� �޸𸮸� �����ؾ� ��.
*/