/*
5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
*/
#include <iostream>
#include <cstring>
using namespace std;

class Grade
{
	char* name;
	int kr;
	int math;
	int english;

public:
	Grade(const char* myname, int mykr, int mymath, int myenglish)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		kr = mykr;
		math = mymath;
		english = myenglish;
	}
	void showData() const
	{
		cout << "�̸� :  " << name << endl;
		cout << "���� :  " << kr << endl;
		cout << "���� :  " << math << endl;
		cout << "���� :  " << english << endl;

	}
};

int main(void)
{	
	int kr, math, english;
	kr = 80;
	math = 90;
	english = 95;


	



	return 0;
}

