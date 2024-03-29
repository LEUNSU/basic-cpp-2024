/*
5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// 1. 객체 포인터배열 사용
class Grade
{
    char* name;         // 포인터를 사용하고 있다.
    int ko;
    int eng;
    int math;
public:
    Grade(const char* name, int ko, int eng, int math) 
    {   
        this->name = new char[strlen(name) + 1];     // 메모리 동적할당
        strcpy(this->name, name);
        this->ko = ko;
        this->eng = eng;
        this->math = math; 
    }
    ~Grade()
    {
        printf("소멸자 호출\n");
        delete[] name;
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
    Grade* gradeAry[3];         // 객체 포인터 배열

    char name[20];
    int inKo;
    int inEng;
    int inMath;
    int num;

    // 1. 하나만 입력을 받는다. -> 5개 입력
    for (int i = 0; i < 3; i++) 
    {
        cout << "이름 : ";
        cin >> name;
        cout << "국어점수 : ";
        cin >> inKo;
        cout << "영어점수 : ";
        cin >> inEng;
        cout << "수학점수 : ";
        cin >> inMath;

        //cout << name << inKo << inEng << inMath << endl;

    // 2.객체 생성 : 5개의 객체를 생성(2). 객체배열 or 객체 포인터 배열
        gradeAry[i] = new Grade(name, inKo, inEng, inMath);
    }
    int kosum = 0;
    int engsum = 0;
    int mathsum = 0;

    for (int i = 0; i < 3; i++)
    {
        kosum += gradeAry[i]->getKo();
        engsum += gradeAry[i]->getEng();
        mathsum += gradeAry[i]->getMath();
    }

    for (int i = 0; i < 3; i++)
    {
        //cout << "총점 : " << gradeAry[i]->sum() << "평점 : " << gradeAry[i]->avg() << endl;
        printf("%d번째 학생 총점 : %d, 평점 : %.1f\n",i+1, gradeAry[i]->sum(),gradeAry[i]->avg());
        printf("국어 총점 : %d, 평점 : %.1f\n", kosum, float(kosum / size(gradeAry)));
        printf("수학 총점 : %d, 평점 : %.1f\n", engsum, float(engsum / size(gradeAry)));
        printf("영어 총점 : %d, 평점 : %.1f\n", mathsum, float(mathsum / size(gradeAry)));
    }

    for (int i = 0; i < 3; i++)
    {
        printf("객체 할당 소멸자 호출\n");
        delete gradeAry[i];
    }
        return 0;
    
}

