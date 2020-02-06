//定义Point与Rectangle类 给予两个坐标 左上角与右下角 利用类的组合 求出面积
#include <iostream>

class Point
{
public:
	Point(double xx, double yy);
	Point(const Point& p);
	double getX() const{ return x; }
	double getY() const{ return y; }
	~Point() {};
private:
	double x, y;
};
Point::Point(double xx, double yy)
{
	x = xx;
	y = yy;
}
Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
}
class Rectangle
{
public:
	Rectangle(Point xp1, Point xp2);
	Rectangle(const Rectangle &R);
	void area(const Point& po1, const Point& po2);
	~Rectangle() {};
private:
	Point pt1, pt2;
};
Rectangle::Rectangle(Point xp1, Point xp2) :pt1(xp1), pt2(xp2) {};
Rectangle::Rectangle(const Rectangle& R) :pt1(R.pt1), pt2(R.pt2) {};
void Rectangle::area(const Point& po1, const Point& po2)
{
	double sum = 0.00;
	double x = po2.getX() - po1.getX();
	double y = po2.getY() - po1.getY();
	sum = x * y;
	std::cout << sum;
}
int main()
{
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	std::cin >> x1 >> y1 >> x2 >> y2;
	Point pp1(x1, y1), pp2(x2, y2);
	Rectangle Rec(pp1, pp2);
	Rec.area(pp1, pp2);
	return 0;
}
