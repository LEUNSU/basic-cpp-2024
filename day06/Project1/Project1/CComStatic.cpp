#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;		// 지역변수에 static을 붙이면, 지역 + 전역
	// int cnt = 0;		// 111111111
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
		// cnt--;	// 선언되어있는 영역에서 사용된다. 그 외에서는 사용 안됨 
	}
	return 0;
}