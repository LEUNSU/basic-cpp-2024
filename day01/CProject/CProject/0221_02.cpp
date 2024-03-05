/*
  선택제어문 : if else문
*/

#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "정수 입력 > ";
	cin >> inKey;

	if (inKey == 5) {
		cout << "빙고" << endl;
	}
	else if (inKey > 5) {
		cout << "숫자가 큽니다." << endl;
	}
	else if (inKey < 5) {
		cout << "숫자가 작습니다." << endl;
	}
	else cout << "잘못된 입력입니다." << endl;

	return 0;
}