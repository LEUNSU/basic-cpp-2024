#include <iostream>

using namespace std;

void swap(int &a, int &b)	
{
	int temp;
	temp = a;			
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(a, b);

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}