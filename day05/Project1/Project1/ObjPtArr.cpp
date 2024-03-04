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
        name = new char[len];
        strcpy_s(name, len, myname);
        age = myage;
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
        name = new char[len];
        strcpy_s(name, len, myname);
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
    Person* parr[3];  // Person ��ü ������ �迭 ����
    char namestr[100];
    int age;

    // ����ڷκ��� �̸��� ���̸� �Է¹޾� ��ü ���� ����
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << endl;
        cin >> namestr;
        cout << "Age: " << endl;
        cin >> age;
        cout << endl;
        parr[i] = new Person(namestr, age);  // Person ��ü�� �������� �����Ͽ� ������ �迭�� ���� (�������� ��ü�� ����)
    }

    parr[0]->ShowPersonInfo();  // ��ü ���� ��� = ��ü�����͸� ������ ����� ����( -> )
    parr[1]->ShowPersonInfo();  // ��ü ���� ���
    parr[2]->ShowPersonInfo();  // ��ü ���� ���

    // delete �����ڸ� ����Ͽ� �޸𸮸� ����
    delete parr[0];
    delete parr[1];
    delete parr[2];

    return 0;
}
