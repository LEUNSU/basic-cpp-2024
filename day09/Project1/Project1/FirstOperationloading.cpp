#include <iostream>
using namespace std;

// 클래스는내가 만든 자료형(기존의 사칙연산 할 수 없음) 
// 디폴트 자료형이 하는 연산이 구현되어야 함 -> 연산자 오버로딩을 통해 구현할 수 있는 기능을 만듦
class Point	
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)	// 디폴트 값
	{ }
	void ShowPosition() const // 속성값 변하면 안 되니까 상수화
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point operator+(const Point& ref)	//operator+라는 이름의 멤버 함수 
	// 함수의 정의부분. point 출력타입 operator+ 함수이름 const Point& ref 입력
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	// 새로운 객체 생성
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);	// 대입연산자 통해서 생성. 복사생성자 호출
	Point pos4 = pos2.operator+(pos3);  // 'pos2.operator+(pos3)' 멤버함수의 연산자 오버로딩
	// Point pos5 = pos2.operator-(pos3);
	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();

	return 0;
}