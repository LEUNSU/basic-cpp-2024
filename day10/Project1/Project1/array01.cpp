// 배열이름 ary는 배열의 시작주소이다. 
int ary[3];	// 배열 '선언'부에서 배열 인덱스에 있는 숫자는 방의 크기
ary[2];		// 코드 '실행'에서 배열 인덱스에 있는 숫자는 방 번호를 나타낸다.

ary[0] = 10;		// 0번방, 첫번째방, 배열의 시작주소
*(ary + 0) = 10;	// => ary[0] = 10; // *(배열의 시작주소 + 0) = 10 주소를 묶어서 참조연산자를 쓰면 인덱스랑 같다.

*(ary + 1) = 20; == ary[1] = 20;		// 1번방에 20을 집어넣어라.

ary의 주소가 0x0011이라면 다음 방, 즉 1번방(두번째방) 주소는 0x0015이다.

int* p;		// 포인터변수를 나타내는 표시
*p;			// 참조하는 연산자(데이터)

// ★ 배열은 주소

#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };				// int형 배열선언
	int* parr = arr;						// 배열의 이름은 주소이다. 

	printf("arr 주소 : %p\n", arr);			// 배열의 시작 주소
	printf("arr 크기 : %p\n", sizeof(arr));	// int크기 4 x 방 갯수 5 = 20 byte
	
	printf("arr[0]주소 : %p\n", &arr[0]);	// 배열 0번방의 주소, 배열의 시작 주소
	printf("arr[1]주소 : %p\n", &arr[1]);	// 배열 1번방의 주소
	printf("arr + 1 : %p\n", arr + 1);		// => printf("arr[1]주소: %p\n", &arr[1]);

	printf("parr주소 : %p\n", &parr);		// 포인터변수 parr의 주소
	printf("parr 데이터 : %p\n", parr);		// => printf("arr 주소 : %p\n", arr); 배열 arr의 주소를 저장하고 있다.
	printf("parr + 1 : %p\n", parr + 1);	// => printf("arr[1]주소 : %p\n", &arr[1]);

	printf("parr[0] : %d  *parr : %d  arr[0]: %d\n", parr[0], * parr, arr[0]);

	return 0;
}