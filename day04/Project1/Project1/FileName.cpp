#include <iostream>
using namespace std;

class Student
{
private:
	const int ID;
	char name[20];				// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ��� strcpy()�ؼ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;

public:
	// ���ڿ��� �ּ��̱� ������ ������ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ��� �̴ϼȶ������ ��ü ���� �� �ʱ�ȭ���� �ʴ� ������� �ʱ�ȭ�� �� ����Ѵ�. ��, ��ü ������ ������� �̸� �ʱ�ȭ�� �Ǵ� ������� �ʱ�ȭ
	Student(int IID, const char *pname, const char *pmajor, int aage) : ID(IID)	// ��� �̴ϼȶ�����
	{ 
		
		// ID = IID;
		strcpy(name, pname);	// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ��� strcpy()�ؼ� �ʱ�ȭ �Ѵ�.
 		strcpy(major,pmajor);	//
		age = aage;
	
	}

	void studentInfo() 
	{
		cout << "�й�: " << ID << endl;
		cout << "�̸�: " << name << endl;
		cout << "����: " << major << endl;
		cout << "����: " << age << endl;

	}
		
};

int main(void)
{
	Student s1(1, "ȫ�浿", "��ǻ�Ͱ��а�", 26);	// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�. 
	s1.studentInfo();
	return 0;
}