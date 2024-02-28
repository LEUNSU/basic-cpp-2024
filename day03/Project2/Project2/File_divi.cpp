#include <iostream>
#include "File_divi.h"

using namespace std;

void Human::human(const char *pname, int aage, const char *pjob) 
{
	strcpy(name, pname);
	age = aage;
	strcpy(job, pjob);	
}

void Human:: humanInfo() {
	std::cout << "나는" << name << "입니다." << std::endl;
	std::cout << "나이는" << age << "입니다." << std::endl;
	std::cout << "직업은" << job << "입니다." << std::endl;

}

int main()
{	
	Human h("홍길동", 50, "백수");	
	h.humanInfo();					
	return 0;
}