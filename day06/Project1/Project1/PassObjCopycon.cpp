#include <iostream>
using namespace std;
class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()					// 멤버함수 -> 객체 생성 후에 사용가능
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)		// 클래스에 소속되어있지 않음. 전역함수 -> 아무나 바로 접근 가능
{
	ob.ShowData();
}
int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;
	return 0;
}