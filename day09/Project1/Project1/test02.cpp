#include <iostream>
using namespace std;

class Point 
{
private:
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b)
	{ }
	void viewPoint() const 
	{
		cout << '[' << x << "," << y << ']' << endl;
	}
	Point operator+(const Point& ref)

	{
		Point i(x + ref.x, y + ref.y);
		return i;
	}

	Point operator+(int)
	{

	}

	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& i)
{
	os << '[' << i.x << "," << i.y << ']' << endl;
	return os;
}


int main(void)
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return 0;
}