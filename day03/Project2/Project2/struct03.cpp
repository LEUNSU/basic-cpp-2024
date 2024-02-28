/*
	C++ 클래스 : 클래스 멤버로 멤버 변수와 멤버 함수를 가진다.
*/
#include <iostream>

class human {			// human 클래스(내가 만든 사용자정의 자료형) 
public:
	char name[20];							// 속성; 멤버변수(name, age, job)
	int age;
	char job[20];

	void showHuman()						// 기능을 담당하는 멤버함수
	{
		printf("name: %s age: %d job:%s\n", name, age, job);
	}

}Human;										// 앞으로 human 구조체를 Human으로 사용하겠다. 


int main()
{
	int a = 10;
	//	human h1 = { "홍길동", 50, "의적" };	// human타입의 변수를 선언하고 초기화를 시킨다.
	//  h1.showHuman();
	human h1 = { "홍길동", 50, "의적" };
	h1.showHuman();

	return 0;
}
/*
* Class
: 멤버변수와 멤버함수로 구성된다.
: 클래스 내부에는 멤버들의 선언으로 작성된다.
: 멤버함수의 정의를 외부로 빼낸다.(스코프연산자사용)
: 일반적으로 멤버변수는 private, 멤버함수는 public의 접근제한을 사용한다.
*/


ClassName objetName;
ClassName* p = new ClassName;	// new연산자는 힙영역에 메모리를 할당하고 그 주소를 리턴한다.

char a = 'a';
int* p = &a;