/*
C-Style ���ڿ�
���ڿ� �� �������� �ι��ڰ� ����.
*/
#include <iostream>
using namespace std;

int main()
{
	//int code = 97;
	//cout << code << endl;		 // 97
	//cout << (char)code << endl;	 // ����ȯ. a (ascii �ڵ�)
	//cout << "====================" << endl;
	//char ary[6] = { 'a','b','c','d','e' };			// ���ڿ� Ÿ�� �迭�ڵ� ����
	//cout << ary << endl;							// abcde
	//printf("==================================\n");	
	//char ary1[] = { 'a','b','c','\0','e' };			// �ι��� : ���ڿ��� ���� �˸���. 
	//cout << ary1 << endl;							// abc 
	//cout << sizeof(ary1) << endl;	// ��ü ���ڿ��� ũ�⸦ ��ȯ. 5
	//cout << strlen(ary1) << endl;	// �ι��� �ձ����� ���� ũ��. 3
	//printf("==================================\n");
	//char str[] = "string";			// �ڵ����� �ι��ڰ� �ٴ´�. ���� ������ ����� ���ڿ�
	//cout << str << endl;			
	//cout << sizeof(str) << endl;	// �ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�. 7
	//cout << strlen(str) << endl;	// 6
	//str[0] = 'S';
	//cout << str << endl;
	//printf("==================================\n");
	//const char* pstr = "STRING";	// read-only ������ ������ ����� ���ڿ��� �����ͺ����� ���� ����Ų��. (���� �Ұ���)
	//cout << pstr << endl;
	//cout << sizeof(pstr) << endl;	// pstr �����ͺ����� ũ��. 8 (64��Ʈ ������ ũ��� 8byte) 
	//int a = 100;
	//int *pa = &a;
	//cout << sizeof(pa) << endl;	// 8	
	//cout << strlen(pstr) << endl;	// 6
	//// pstr[0] = 's';				// ���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ����ϴ�.

	//printf("==================================\n");
	//printf("==================================\n");

/*
C++-style : heap ������ �����Ѵ�.
*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;		// 40
	// cout << strlen(s) << endl;	// const char ������Ÿ���̱� ������ ����� �� ����
	cout << s.size() << endl;		// 6

	//string s1 = "LeeEunsu";
	//cout << s1 << endl;
	//cout << sizeof(s1) << endl;		// 40
	//cout << s1.size() << endl;		// 8
	
	string s1 = "Hi";
	string s2 = "you";
	string s3 = s1 + s2;
	cout << s3 << endl;

	return 0;
}
