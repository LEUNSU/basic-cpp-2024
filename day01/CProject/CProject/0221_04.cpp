/*
  반복제어문 : for문
*/

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		//sum += i;
		sum = sum + i;
	}
	std::cout << sum <<std:: endl;

	return 0;
}