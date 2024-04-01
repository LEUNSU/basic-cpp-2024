/*
조건: while문과 if문만으로 배열 순서를 바꾸어 저장 출력하시오
*/
#include <iostream>
using namespace std;



int main(void)
{
	char ary[] = { 'a','b','c','d','e','f' };

	reverse(begin(ary), end(ary));

	for (const char& i : ary) 
	{
		cout << i << ' ';
	}

	return 0; 
	
}
