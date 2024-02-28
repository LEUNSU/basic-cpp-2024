#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& Addnum(int n)
	{
		num += n;		// num = num + n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};
SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).Addnum(30).ShowData();
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}