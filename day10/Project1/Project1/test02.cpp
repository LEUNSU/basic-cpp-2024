/*
5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;
// 1. ��ü �����͹迭 ���
class Grade
{
    char *name;         // �����͸� ����ϰ� �ִ�.
    int ko;
    int eng;
    int math;
public:
   /* Grade(const char* myname, int myko, int myeng, int mymath)    //  ��ü ���� �� ��ü�� �� ������ ������.
    {
        int len=strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        ko = myko;
        eng = myeng;
        math = mymath;
    }*/
    Grade()
    {
       /* name = NULL;
        ko = 0;
        eng = 0;
        math = 0;*/
        cout << "����Ʈ ������" << endl;                            // ��ü ����
    }
    void Student(char* myname, int myko, int myeng, int mymath)     // ��ü�� ������ ��, �� ������ �ʱ�ȭ���Ѷ�.
    {   
        name = myname;
        ko = myko;
        eng = myeng;
        math = mymath;
    }
    ~Grade()
    {
        printf("�Ҹ��� ȣ��\n");
    }
    int getKo()
    {
        return ko;
    }
    int getEng()
    {
        return eng;

    }
    int getMath()
    {
        return math;

    }
    int sum()
    {
        int sum = ko + eng + math;
        return sum;
    }
    double avg()
    {
        double avg = sum() / 3.0;
        return avg;
    }
};

int main(void)
{
    // Grade* gradeAry[3];         // ��ü ������ �迭
    //Grade gradeAry[3] = {};        // ��ü �迭

    char name[20] = {};
    int inKo = 0;
    int inEng = 0;
    int inMath = 0;
    int num = 0;

    cout << "����ó�� �л� �� : " << endl;
    cin >> num;

    //vector<Grade*> gradeAry(num);
    //vector<Grade> gradeAry(num);

    // 1. �ϳ��� �Է��� �޴´�. -> 5�� �Է�
    for (int i = 0; i < num; i++)
    {
        cout << "�̸� : ";
        cin >> name;
        cout << "�������� : ";
        cin >> inKo;
        cout << "�������� : ";
        cin >> inEng;
        cout << "�������� : ";
        cin >> inMath;

        //cout << name << inKo << inEng << inMath << endl;

    // 2.��ü ���� : 5���� ��ü�� ����(2). ��ü�迭 or ��ü ������ �迭
        gradeAry[i].Student(name, inKo, inEng, inMath);
    }

    int kosum = 0;
    int engsum = 0;
    int mathsum = 0;

    for (int i = 0; i < 3; i++)
    {
        kosum += gradeAry[i].getKo();
        engsum += gradeAry[i].getEng();
        mathsum += gradeAry[i].getMath();
    }

    for (int i = 0; i < 3; i++)
    {
        //cout << "���� : " << gradeAry[i]->sum() << "���� : " << gradeAry[i]->avg() << endl;
        printf("%d��° �л� ���� : %d, ���� : %.1f\n", i + 1, gradeAry[i].sum(), gradeAry[i].avg());
        printf("���� ���� : %d, ���� : %.1f\n", kosum, float(kosum / size(gradeAry)));
        printf("���� ���� : %d, ���� : %.1f\n", engsum, float(engsum / size(gradeAry)));
        printf("���� ���� : %d, ���� : %.1f\n", mathsum, float(mathsum / size(gradeAry)));
    }

    for (int i = 0; i < 3; i++)
    {
        printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
    }
    return 0;

}
