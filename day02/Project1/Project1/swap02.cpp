#include <iostream>

using namespace std;
/*
	swap함수 구현하기
*/

void swap(int *a, int *b)	// 주소를 받을 수 있는 포인터변수를 선언
{
	int temp;
	temp = * a;				// 주소의 데이터를 참조
	*a =  *b;
	*b = temp;
}

int main()
{	
	int a = 10;	// 지역변수
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);		// 변수의 주소를 전달

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}
/*
A& B	// 비트연산자 : A와 B를 논리곱 연산을 해라.
A&& B	// 논리연산자 - 논리곱 : A가 참이고 B도 참인 경우 결과가 참

int& num2 = num1;
int& num2 = 100;


int num = 10;	// 일반적인 변수 선언
int* ptr = &num1;            
int& num2 = num1;
*/