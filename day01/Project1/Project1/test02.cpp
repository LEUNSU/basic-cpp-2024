# include <iostream>

int main(void)	// ��ȣ�� ��� �� �� = �Է� ��(�Է°� = �ִ� ����), main = �Լ���, int = �Լ��� ���, ��ü= �Լ��� ����
	// �Ӹ� = 3��, ��ü = �Ӹ� �� {} ����, void = ��°� 
{
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}