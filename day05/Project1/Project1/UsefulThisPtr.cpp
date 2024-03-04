#include <iostream>
#include <cstring>
using namespace std;

class TwoNumber
{
private:
    int num1; // ù ��° ������ �����ϴ� ��� ����
    int num2; // �� ��° ������ �����ϴ� ��� ����

public:
    // ������: �� ���� ������ �޾� ��� ������ �ʱ�ȭ
    TwoNumber(int num1, int num2)
    {
        this->num1 = num1; // ù ��° ������ ��� ������ �Ҵ�
        this->num2 = num2; // �� ��° ������ ��� ������ �Ҵ�
    }
    /*
    TwoNumber(int num1, int num2) : num1(num1), num2(num2)
       {
        // empty
       }
    */
    // �� ������ ����ϴ� �Լ�
    void ShowTwoNumber()
    {
        cout << "First number: " << this->num1 << endl; // ù ��° ���� ���
        cout << "Second number: " << this->num2 << endl; // �� ��° ���� ���
    }
};

int main(void) {
    TwoNumber two(2, 4); // TwoNumber Ŭ������ ��ü ���� �� �ʱ�ȭ
    two.ShowTwoNumber(); // ��ü�� �� ���� ���
    return 0;
}

/* �߰� ���� ��
1. TwoNumber Ŭ����
=> num1�� num2��� �� ���� ��� ������ ������ ����.

2. ������ TwoNumber(int num1, int num2)
=> �� ���� ���ڸ� �޾Ƽ� num1�� num2 ��� ������ ���� �Ҵ�.

3. ShowTwoNumber() �Լ�
=> ��ü�� num1�� num2 ��� ������ ���.
*/