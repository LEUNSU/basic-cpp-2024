#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
    int num; // ������ ��� ���� num ����
public:
    SoSimple(int num)
    {
        this->num = num;
        cout << "num = " << num << ", " << endl; // �����ڿ��� ��� ���� num�� ���� ���
        cout << "address = " << this << endl; // ��ü�� �ּҸ� ���
    }

    void ShowSimpleData() {
        cout << num << endl; // ��� ���� num�� ���� ���
        cout << endl;
    }

    SoSimple* GetThisPointer()
    {
        return this; // ��ü�� �ּҸ� ��ȯ
    }
};

int main(void)
{
    SoSimple sim1(100); // SoSimple ��ü ���� �� �ʱ�ȭ
    SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü�� �ּҸ� ����
    cout << ptr1 << ", " << endl; // ������ �� ���
    ptr1->ShowSimpleData(); // �����͸� ���� ��ü�� ������ ���

    SoSimple sim2(200); // SoSimple ��ü ���� �� �ʱ�ȭ
    SoSimple* ptr2 = sim2.GetThisPointer(); // sim2 ��ü�� �ּҸ� ����
    cout << ptr2 << ", " << endl; // ������ �� ���
    ptr2->ShowSimpleData(); // �����͸� ���� ��ü�� ������ ���

    return 0;
}
/* �߰� ����
1. SoSimple Ŭ������ ������ ��� ���� num �ϳ��� ������ ����

2. SoSimple Ŭ������ �����ڿ����� ���޹��� ���� num�� ��� ���� num�� �Ҵ��ϰ�, �� ���� ���

3. �����ڿ��� this �����͸� ���� ��ü�� �ּҸ� ���

4. ShowSimpleData() �Լ��� ��ü�� num ��� ������ ���

5. GetThisPointer() �Լ��� ��ü�� �ּҸ� ��ȯ

-- �ڵ� main() �Լ�-- :

1. sim1 ��ü�� �����ϰ� �ʱ�ȭ.
-> �̶� �����ڿ��� num ��� ������ ���� ����ϰ�, ��ü�� �ּҸ� ���.

2. GetThisPointer() �Լ� ����
=> sim1 ��ü�� �ּҸ� ������ ptr1�� �����ϰ�, �̸� ���.

3. ptr1�� ����Ͽ� sim1 ��ü�� �����͸� ���.
-> �� ������ sim2 ��ü�� ���ؼ��� �ݺ�
*/
