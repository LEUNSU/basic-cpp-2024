/*
vector 객체를 생성하고 정수를 입력받을 때마다 벡터에 삽입하고 평균을 출력하시오.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	/*while(true) 
	{
		int n;
		cout << "정수를 입력하세요";
		cin >> n;
		v.push_back(n);
		float sum = 0;

		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
		}

		float avg =  sum / v.size(); 
		cout << "평균 : " << avg << endl;
	}
	*/
	
	int inKey;
	int sum = 0;

	while (true)
	{
		cout << "정수 한 개 입력(0 종료): ";
		cin >> inKey;
		if (!inKey)
		{
			break;
		}
		v.push_back(inKey);
		sum += inKey;
		cout << sum / v.size() << endl;
	}
		cout << "프로그램을 종료합니다." << endl;

	

	return 0;
}