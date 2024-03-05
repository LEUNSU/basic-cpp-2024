/*
#include <iostream>

using namespace std;

int main() 
{
	int a = 10;
	int b = 20;
	int c = 30;
	// int ary[3] = { 10, 20, 30 };
	// ary[0] = 1111;
	// ary[1] = 100;
	for(int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	return 0;
}
*/
/*
* 자료형
* 문자 : 문자(char) / 문자열
* 숫자 : 정수(int) / 실수
*/

# include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까 ?";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는" << lang << "입니다." << std::endl;
	return 0;
}