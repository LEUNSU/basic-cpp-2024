#include <iostream>

/*int Adder(int num1 = 1, int num2 = 2) 
{
	return num1 + num2;

}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}*/

/*using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수 선언

int Adder(int num1, int num2)		// 함수 정의
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;	// 함수 호출 : Adder()
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}*/

// 클래스 안에 들어가는 함수를 메서드라고 부른다.
// 호출하는 것 아래에 정의를 작성할 경우, 선언 제일 위에 작성.

/*using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수 선언

void Func() {
	cout << "Hi" << endl;
}

int main(void)
{
	std::cout << Adder() << std::endl;	// 함수 호출 : Adder()
	Func();

	return 0;
}

int Adder(int num1, int num2)		// 함수 정의
{
	return num1 + num2;
}
*/