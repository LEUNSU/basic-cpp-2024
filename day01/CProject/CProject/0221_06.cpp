//함수이름이 같아도, 입력(매개변수)이 다르면 오버로딩이 허용됨(C++에서만, C에서는 함수이름이 같으면 동일 함수로)

/*#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;

}
void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}
*/