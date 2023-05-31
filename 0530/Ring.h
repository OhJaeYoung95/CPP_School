#pragma once

class Point
{
private:
	int xPos;
	int yPos;

public:
	Point(const int x, const int y);
	void Init(int x, int y);
	void ShowPointInfo() const;
};

class Circle
{
private:
	Point center;
	double radius;
public:
	Circle(const int x, const int y, const double rad);
	void Init(Point cen, double rad);
	void ShowCircleInfo() const;
};

class Ring
{
private:
	Circle c1;
	Circle c2;

public:
	Ring(const int x1, const int y1, const double rad1, const int x2, const int y2, const double rad2);
	void Init(Circle c1,  Circle c2);
	void ShowRingInfo() const;
};