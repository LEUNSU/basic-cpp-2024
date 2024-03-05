#include <iostream>

using namespace std;

int main()
{
	const int num = 10;	// num변수를 상수화시킨다.
	// num = 100;	// num이 상수이므로 변경할 수 없다.

	int num1 = 10;	
	int *pnum1;		// 포인터변수 선언 : 포인터(주소)변수 pnum1 선언. 선언 부분에서 *는 아무 의미없는 기호
	pnum1 = &num1;	// 변수 num1의 주소값을 포인터변수 pnum1에 저장한다.

	cout << "num에 저장된 값 : " << num << endl;
	cout << "num1에 저장된 값 : " << num1 << endl;
	cout << "num1에 주소값 : " << &num1 << endl;
	cout << "pnum1에 저장된 값 : " << pnum1 << endl;
	cout << "pnum1에 저장된 놈의 데이터 : " << *pnum1 << endl;	// 코드 부분에서 *는 가리키는 놈의 데이터

	return 0;
}

/* C에서 메모리
1. 스택 : 지역변수, 매개변수
2. heap : 사용자에게 할당된 영역
	사용을 할려면 malloc()(C++: new)으로 할당을 받는다 - free()(C++:delete)반환
3. data : 함수, 전역변수, 상수, 문자리터럴

*/