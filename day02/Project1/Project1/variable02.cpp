#include <iostream>
using namespace std;

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};	// 배열 선언
	for (int i = 0; i < 5; i++) {	// 배열 출력
		cout << i << "번째 방에 들어있는 요소 값" << arr[i] << endl;	// 배열의 각 원소에 접근
	}
	arr[3] = 10;
	cout << "arr[3]: " << arr[3] << endl;

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	ref1 = 100;
	cout << "arr[0]: " << arr[0] << endl;

	return 0;
}