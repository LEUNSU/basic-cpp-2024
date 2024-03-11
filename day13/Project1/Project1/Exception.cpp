#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	//int a, b;
	//int add;
	//int minus;
	//int multiple;
	//int divide;

	//cout << "정수를 입력하세요: ";
	//cin >> a >> b;

	//add = a + b;
	//minus = a - b;
	//multiple = a * b;
	//divide = a / b;

	//cout << "두 수의 합: " << add;
	//cout << "두 수의 차: " << minus;
	//cout << "두 수의 곱: " << multiple;
	//cout << "두 수의 나눗셈: " << divide;

	int n1, n2;
	cout << "정수 2개를 입력하세요";
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl;
	cout << "-: " << n1 - n2 << endl;
	cout << "*: " << n1 * n2 << endl;
	try {
		if (!n2) throw n2;	// 0이외의 것들은 전부 참
		cout << "/: " << n1 / n2 << endl;
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}



	return 0;
}