/*
5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
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
		cout << "이름 :  " << name << endl;
		cout << "국어 :  " << kr << endl;
		cout << "수학 :  " << math << endl;
		cout << "영어 :  " << english << endl;

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

