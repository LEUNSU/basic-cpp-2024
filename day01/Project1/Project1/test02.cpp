# include <iostream>

int main(void)	// 괄호가 들어 간 것 = 입력 값(입력값 = 있다 없다), main = 함수명, int = 함수의 출력, 전체= 함수의 정의
	// 머리 = 3행, 몸체 = 머리 밑 {} 들어간것, void = 출력값 
{
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}