#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;		// ���������� static�� ���̸�, ���� + ����
	// int cnt = 0;		// 111111111
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
		// cnt--;	// ����Ǿ��ִ� �������� ���ȴ�. �� �ܿ����� ��� �ȵ� 
	}
	return 0;
}