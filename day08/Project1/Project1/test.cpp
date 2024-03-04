// RemoteControl클래스, SamsungTv 클래스, LgTv 클래스를 설계하고,
// remote -> on()을 호출하면 연결된 TV에 따라서 
// "삼성 TV on" 또는 "LG TV on"이 출력되도록 프로그램을 완성하시오.
#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on()
	{
		cout << "TV를 켭니다." << endl;
	}
};

class SamsungTV : public RemoteControl
{
public:
	virtual void on()
	{
		cout << "Samsung TV를 켭니다." << endl;
	}
};

class LGTV : public RemoteControl
{
public:
	virtual void on()
	{
		cout << "LG TV를 켭니다." << endl;
	}
};

int main(void)
{
	RemoteControl* remote = new SamsungTV();
	remote->on();

	remote = new LGTV(); 
	remote->on();

	delete remote;
	return 0;
}