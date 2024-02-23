#include <iostream>
#include <string.h>
using namespace std;

class Simple
{
public:
	Simple()								// 생성자(클래스이름과 같은 메서드) 
	{
		cout << "I'm simple constuctor!" << endl;
	}
};

int main(void)
{
	cout << "case1: ";
	Simple* sp1 = new Simple;				// new 연산자를 통한 객체생성
	// Aaa *ap = new Aaa;
	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); // malloc 함수로 메모리에 할당 

	cout << endl << "end of main" << endl;
	delete sp1;								// 동적으로 할당된 객체를 삭제, 객체를 반환한다.
	free(sp2);								// malloc에 할당된 메모리를 삭제
	return 0;
}

/*
1. delete 연산은 동적으로 할당된 객체를 삭제하고 해당 객체의 소멸자를 호출.
2. malloc 함수로 할당된 메모리에 대해 -> free 함수를 호출하여 메모리를 해제해야 함.
*/