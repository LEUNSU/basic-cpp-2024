/*
	C++ Ÿ���� ����ü : ����ü ����� ��� ������ ��� �Լ��� ������.
*/
#include <iostream>

typedef struct human {						// human ����ü(���� ���� ��������� �ڷ���) 
	char name[20];							// �Ӽ�; �������(name, age, job)
	int age;
	char job[20];
	
	void showHuman()						// ����� ����ϴ� ����Լ�
	{
		printf("name: %s age: %d job:%s\n", name, age, job);
	}

}Human;										// ������ human ����ü�� Human���� ����ϰڴ�. 


int main()
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" };	// humanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	h1.showHuman();

	return 0;
}