/*
vector ��ü�� �����ϰ� ������ �Է¹��� ������ ���Ϳ� �����ϰ� ����� ����Ͻÿ�.
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
		cout << "������ �Է��ϼ���";
		cin >> n;
		v.push_back(n);
		float sum = 0;

		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
		}

		float avg =  sum / v.size(); 
		cout << "��� : " << avg << endl;
	}
	*/
	
	int inKey;
	int sum = 0;

	while (true)
	{
		cout << "���� �� �� �Է�(0 ����): ";
		cin >> inKey;
		if (!inKey)
		{
			break;
		}
		v.push_back(inKey);
		sum += inKey;
		cout << sum / v.size() << endl;
	}
		cout << "���α׷��� �����մϴ�." << endl;

	

	return 0;
}