#include <iostream>
#include "Ring.h"
using namespace std;

Point::Point(const int x, const int y) : xPos(x), yPos(y)
{

}

void Point::Init(int x, int y)
{
	xPos = x;
	yPos = y;
}
void Point::ShowPointInfo() const
{
	cout << "[" << xPos << ", " << yPos << "]" << endl;
}

Circle::Circle(const int x, const int y, const double rad) : center(x, y), radius(rad)
{

}

void Circle::Init(Point cen, double rad)
{
	center = cen;
	radius = rad;
}
void Circle::ShowCircleInfo() const
{
	cout << "radius: " << radius << endl;
	center.ShowPointInfo();

}

Ring::Ring(const int x1, const int y1, const double rad1, const int x2, const int y2, const double rad2) : c1(x1, y1, rad1), c2(x2, y2, rad2)
{

}

void Ring::Init(Circle c1, Circle c2)
{
	this->c1 = c1;
	this->c2 = c2;
}
void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info... " << endl;
	c1.ShowCircleInfo();
	cout << "Outter Circle Info... " << endl;
	c2.ShowCircleInfo();
}

