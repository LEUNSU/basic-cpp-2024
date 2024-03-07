/*
C-Style 문자열
문자열 은 마지막에 널문자가 붙음.
*/
#include <iostream>
using namespace std;

int main()
{
	//int code = 97;
	//cout << code << endl;		 // 97
	//cout << (char)code << endl;	 // 형변환. a (ascii 코드)
	//cout << "====================" << endl;
	//char ary[6] = { 'a','b','c','d','e' };			// 문자열 타입 배열코드 선언
	//cout << ary << endl;							// abcde
	//printf("==================================\n");	
	//char ary1[] = { 'a','b','c','\0','e' };			// 널문자 : 문자열의 끝을 알린다. 
	//cout << ary1 << endl;							// abc 
	//cout << sizeof(ary1) << endl;	// 전체 문자열의 크기를 반환. 5
	//cout << strlen(ary1) << endl;	// 널문자 앞까지의 문자 크기. 3
	//printf("==================================\n");
	//char str[] = "string";			// 자동으로 널문자가 붙는다. 스택 영역에 저장된 문자열
	//cout << str << endl;			
	//cout << sizeof(str) << endl;	// 널문자가 포함된 크기가 리턴된다. 7
	//cout << strlen(str) << endl;	// 6
	//str[0] = 'S';
	//cout << str << endl;
	//printf("==================================\n");
	//const char* pstr = "STRING";	// read-only 데이터 영역의 저장된 문자열을 포인터변수를 통해 가리킨다. (수정 불가능)
	//cout << pstr << endl;
	//cout << sizeof(pstr) << endl;	// pstr 포인터변수의 크기. 8 (64비트 포인터 크기는 8byte) 
	//int a = 100;
	//int *pa = &a;
	//cout << sizeof(pa) << endl;	// 8	
	//cout << strlen(pstr) << endl;	// 6
	//// pstr[0] = 's';				// 문자열을 포인터로 사용하는 경우는 변경이 불가능하다.

	//printf("==================================\n");
	//printf("==================================\n");

/*
C++-style : heap 영역에 저장한다.
*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;		// 40
	// cout << strlen(s) << endl;	// const char 포인터타입이기 때문에 사용할 수 없음
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
