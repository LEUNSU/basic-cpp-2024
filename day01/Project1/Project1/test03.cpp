/*
# include <iostream>

int main(void)
{
	int val1;
	std::cout << "ù��° �����Է�: ";
	std::cin >> val1;

	int val2;
	std::cout << "�ι�° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "�������: " << result << std::endl;
	return 0;

}
*/

# include <iostream>

int global = 100;

void func() 
{
	int a;
	a = 100;
	global = 200;
}

int main(void)
{	
	int a;
	int val;	//�޸𸮰���(RAM)�� intũ��� ��������� �Ҵ�ް� val�̸����� ����Ѵ�.
	std::cout << "�����Է�: ";
	std::cin >> val;

	std::cout << "�Է��� ���ڴ� " << val << "�Դϴ�." << std::endl;
	a = 10;
	val = 100;
	global = 300;
	return 0;

}

/*
 �������� = ���ú��� : ����Ǿ��� ���� �ȿ����� ����� ����(static ������ ����) 
*/