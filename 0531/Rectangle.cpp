#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int _len, int _width) : len(_len), width(_width) {}

void Rectangle::ShowAreaInfo()
{
	cout << "¸éÀû: " << len * width << endl;
}