/*
����: while���� if�������� �迭 ������ �ٲپ� ���� ����Ͻÿ�
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
