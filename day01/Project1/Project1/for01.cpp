/*
#include <iostream>

using namespace std;

int main() 
{
	int a = 10;
	int b = 20;
	int c = 30;
	// int ary[3] = { 10, 20, 30 };
	// ary[0] = 1111;
	// ary[1] = 100;
	for(int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	return 0;
}
*/
/*
* �ڷ���
* ���� : ����(char) / ���ڿ�
* ���� : ����(int) / �Ǽ�
*/

# include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ� ?";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� �����ϴ� ����" << lang << "�Դϴ�." << std::endl;
	return 0;
}