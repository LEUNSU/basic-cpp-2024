#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTemInfo()
	{
		cout << "My num is: " << num << endl;
	}
};

int main(void)
{
	Temporary(100);		// ��ü�̸��� ���� -> �̸� ���� �ӽð�ü // Temporary t(100); 
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTemInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);	// �ӽð�ü�� ������ �� �� ���� -> const �ۼ�
	cout << "********** end of main!" << endl << endl;
	return 0;
}