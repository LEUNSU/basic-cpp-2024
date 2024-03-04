// RemoteControlŬ����, SamsungTv Ŭ����, LgTv Ŭ������ �����ϰ�,
// remote -> on()�� ȣ���ϸ� ����� TV�� ���� 
// "�Ｚ TV on" �Ǵ� "LG TV on"�� ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on()
	{
		cout << "TV�� �մϴ�." << endl;
	}
};

class SamsungTV : public RemoteControl
{
public:
	virtual void on()
	{
		cout << "Samsung TV�� �մϴ�." << endl;
	}
};

class LGTV : public RemoteControl
{
public:
	virtual void on()
	{
		cout << "LG TV�� �մϴ�." << endl;
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