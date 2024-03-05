#include <iostream>

using namespace std;

int add(int a , int b){
	int result; 
	result = a + b;
	return result;
}

int minus_num(int a, int b) {
	int result;
	result = a - b;
	return result;
}

int mutiple(int a, int b) {
	int result;
	result = a * b;
	return result;
}

int divide(int a, int b) {
	int result;
	result = a / b;
	return result;
}

int main()
{
	char op;
	int n1, n2;

	cout << "연산자 입력 > ";
	cin >> op;

	cout << "정수 입력 > ";
	cin >> n1 >> n2;

	/*cout << "n1:" << n1 << endl;
	cout << "n2:" << n2 << endl;*/
	

	if (op == '+')
	{
		cout << add(n1, n2) << endl;
	}

	else if (op == '-')
	{
		cout << minus_num(n1, n2) << endl;
	}

	else if (op == '*')
	{
		cout << mutiple(n1, n2) << endl;
	}

	else if (op == '/')
	{
		cout << divide(n1, n2) << endl;
	}

	return 0;
}