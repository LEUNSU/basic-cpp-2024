/*
# include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫번째 숫자입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;

}
*/

# include <iostream>

int global = 100;

void func() 
{
	int a;
	a = 100;
	global = 200;
}

int main(void)
{	
	int a;
	int val;	//메모리공간(RAM)에 int크기로 저장공간을 할당받고 val이름으로 사용한다.
	std::cout << "숫자입력: ";
	std::cin >> val;

	std::cout << "입력한 숫자는 " << val << "입니다." << std::endl;
	a = 10;
	val = 100;
	global = 300;
	return 0;

}

/*
 지역변수 = 로컬변수 : 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장) 
*/