#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Human {
private:
    char name[30];
    int age;

public:
    // ������: �̸��� ���̸� �޾� ��� ������ �ʱ�ȭ
    Human(const char* myname, int myage) {
        strcpy(name, myname);
        age = myage;
    }

    // �Ҹ���: ��ü�� �Ҹ�� �� ȣ��Ǵ� �Լ�
    ~Human() {
        std::cout << "Object " << name << " destroyed." << std::endl;
    }

    // ��ü�� ������ ����ϴ� �Լ�
    void HumanInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }
};

int main() {
    // Human ��ü �迭 ������ �ʱ�ȭ
    Human h[3] = { Human("Hong",50), Human("KIM",28),Human("CHOI",40) };

    // ��ü �迭�� ���� ���
    for (int i = 0; i < 3; i++) {
        h[i].HumanInfo(); // ��ü�� ���� ���
    }

    Human* h1 = new Human("������", 50); // �������� Human ��ü�� �����ϰ�, �����ڸ� ȣ���Ͽ� �ʱ�ȭ
    h1->HumanInfo(); // �������� ������ ��ü�� ������ ���
    //h1.HumanInfo(); ���� h1->HumanInfo();

    delete h1; // �������� ������ ��ü�� �޸𸮿��� �����Ͽ� ������ ����.


    return 0;
}
