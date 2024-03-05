/*#include <iostream>

int main()
{
	const int num = 10;	// 상수를 선언할 때는 바로 초기화를 해야만 한다.
	const int& ref = num;		//

	return 0;
}
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

# define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);	// C:heap 영역에 20Byte크기로 메모리 할당
	printf("char size: %llu\n", sizeof(char));
	return str;

}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}
