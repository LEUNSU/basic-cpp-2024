#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;	//&ob -> 林家楷魂磊 : 按眉 ob狼 林家甫 唱鸥郴绰 疙飞绢 (曼炼楷魂磊绰 急攫且 锭)
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple temRef = SimpleFuncObj(obj);
	cout << "Return Obj" << &temRef << endl;
	return 0;
}

/*
New Object: 0000001C4C2FF8F4 : 按眉obj 林家
New Copy obj: 0000001C4C2FF9F4 : 按眉ob 林家
Parm ADR: 0000001C4C2FF9F4 : 按眉ob 林家
New Copy obj: 0000001C4C2FFA34 : 烙矫按眉 林家
Destroy obj: 0000001C4C2FF9F4  : 按眉ob 家戈
Destroy obj: 0000001C4C2FFA34  : 烙矫按眉 家戈

New Copy obj: 0000001C4C2FFA54  : 按眉ob林家
Parm ADR: 0000001C4C2FFA54 : 按眉ob 林家
New Copy obj: 0000001C4C2FF914 : 烙矫按眉 林家
Destroy obj: 0000001C4C2FFA54 : 按眉ob 家戈
Return Obj0000001C4C2FF914 : 烙矫按眉 林家 
Destroy obj: 0000001C4C2FF914 : 烙矫按眉 家戈
Destroy obj: 0000001C4C2FF8F4 : 按眉 obj 家戈
*/