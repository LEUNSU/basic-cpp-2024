#include <iostream>
using namespace std;

class AA {
    int a;
    int b;

public:
    // ������: �� ������ �޾� �ʱ�ȭ
    AA(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // ���� ������: �ٸ� AA ��ü�� �޾� �ʱ�ȭ
    AA(const AA& other) {
        this->a = other.a;
        this->b = other.b;
    }

    // ��ü�� ������ ����ϴ� �Լ�
    void AAInfo() {
        cout << a << " " << b << endl;
    }
};

int main()
{
    // ��ü ���� �� �ʱ�ȭ
    AA obj1(10, 20);
    obj1.AAInfo(); // obj1�� ���� ���

    // ���� �����ڸ� ȣ��
    // -> obj1�� �������� obj2 �ʱ�ȭ
    AA obj2(obj1);
    obj2.AAInfo(); // obj2�� ���� ���

    return 0;
}
