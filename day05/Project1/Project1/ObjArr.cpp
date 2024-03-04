#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;  // ���ڿ� ������ ��� ����
    int age;     // ���̸� �����ϴ� ��� ����

public:
    // ������: �̸��� ���̸� �޾� ��� ������ �ʱ�ȭ
    Person(const char* myname, int myage) {
        int len = static_cast<int>(strlen(myname)) + 1;
        name = new char[len];  // �������� �޸� �Ҵ��Ͽ� �̸��� ����
        strcpy_s(name, len, myname);  // ���� �̸��� �Ҵ�� �޸𸮿� ����
        age = myage;           // ���̸� �ʱ�ȭ
    }

    // �⺻ ������: �̸��� ���̸� �ʱ�ȭ���� ���� ���
    Person() {
        name = nullptr;
        age = 0;
        cout << "Called Person() " << endl;
        cout << endl;
    }

    // �Ҹ���: �������� �Ҵ�� �޸𸮸� ������
    ~Person() {
        delete[] name;  // �������� �Ҵ�� �޸𸮸� ����
        cout << "Called Destructor!" << endl;
        cout << endl;
    }

    // �̸��� ���̸� �����ϴ� �Լ�
    void SetPersonInfo(const char* myname, int myage) {
        int len = static_cast<int>(strlen(myname)) + 1;
        name = new char[len];  // �������� �޸� �Ҵ��Ͽ� �̸��� ����
        strcpy_s(name, len, myname);  // ���� �̸��� �Ҵ�� �޸𸮿� ����
        age = myage;
    }

    // ��ü�� ������ ����ϴ� �Լ�
    void ShowPersonInfo() const {
        cout << "Name: " << name << ", ";
        cout << "Age: " << age << endl;
        cout << endl;
    }
};

int main(void) {
    Person parr[3];  // Person ��ü �迭 ����
    char namestr[100];
    int age;

    // ����ڷκ��� �̸��� ���̸� �Է¹޾� ��ü ���� ����
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << endl;
        cin >> namestr;
        cout << "Age: " << endl;
        cin >> age;
        cout << endl;
        parr[i].SetPersonInfo(namestr, age);  // ��ü ���� ����
    }

    // ������ ��ü���� ���� ���
    for (int i = 0; i < 3; i++) {
        parr[i].ShowPersonInfo();
    }

    return 0;
}
/* �߰� ����
1. Person Ŭ������ ����Ͽ� �� ���� ����� ���� ������ �Է¹ް� ����ϴ� ���α׷�.

2. Ŭ���� Person�� �̸�(name)�� ����(age)�� �����ϴ� ��� ������ ������ ����.
-> �����ڸ� ���� �̸��� ���̸� �޾� ��� ������ �ʱ�ȭ,
--> �Ҹ��ڸ� ���� �������� �Ҵ�� �޸𸮸� ����.
---> ���� SetPersonInfo �Լ��� ���� �̸��� ���̸� �����ϰ�, ShowPersonInfo �Լ��� ���� ��ü�� ������ ���.

3. main �Լ� => Person Ŭ������ ��ü �迭�� ������ ��
-> ����ڷκ��� �̸��� ���̸� �Է¹޾� ��ü ������ �����ϰ� ���.

*/