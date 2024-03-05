#include <iostream>
using namespace std;

class Student
{
private:
	const int ID;
	char name[20];				// 문자열 배열을 선언하고 바로 초기화하지 않는 경우 strcpy()해서 초기화 한다.
	char major[20];
	int age;

public:
	// 문자열은 주소이기 때문에 포인터 변수에 넣어서 사용한다. - 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜라이즈는 객체 생성 시 초기화되지 않는 멤버들을 초기화할 때 사용한다. 즉, 객체 생성과 상관없이 미리 초기화가 되는 멤버들의 초기화
	Student(int IID, const char *pname, const char *pmajor, int aage) : ID(IID)	// 멤버 이니셜라이즈
	{ 
		
		// ID = IID;
		strcpy(name, pname);	// 문자열 배열을 선언하고 바로 초기화하지 않는 경우 strcpy()해서 초기화 한다.
 		strcpy(major,pmajor);	//
		age = aage;
	
	}

	void studentInfo() 
	{
		cout << "학번: " << ID << endl;
		cout << "이름: " << name << endl;
		cout << "전공: " << major << endl;
		cout << "나이: " << age << endl;

	}
		
};

int main(void)
{
	Student s1(1, "홍길동", "컴퓨터공학과", 26);	// 객체를 생성하면 생성자를 호출해야 한다. 
	s1.studentInfo();
	return 0;
}