#include <iostream>
#include "File_divi.h"

using namespace std;

void Human::human(char name, int age, char job) {

}

void Human:: humanInfo() {
	std::cout << "����" << name << "�Դϴ�." << std::endl;
	std::cout << "���̴�" << age << "�Դϴ�." << std::endl;
	std::cout << "������" << job << "�Դϴ�." << std::endl;

}

int main()
{	
	Human h("ȫ�浿", 50, "���");	
	h.humanInfo();					
	return 0;
}