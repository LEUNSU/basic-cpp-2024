#include <iostream>
using namespace std;

/*
int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);	// num2 = 2
	// ref = 10;

	num1 += 1;	// 3
	num2 += 100;	//102
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/

int& FuncOne(int n)
{	
	int num = 20;
	num += n;
	return num;		// num = 30
}

int main(void)
{
	int& ref = FuncOne(10);	// ref = 30

	return 0;
}