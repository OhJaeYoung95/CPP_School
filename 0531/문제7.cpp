#include <iostream>

#include "Car.h"
#include "HybridCar.h"
#include "HybridWaterCar.h"
#include "MyFriendInfo.h"
#include "MyFriendDetailInfo.h"

#include "Rectangle.h"
#include "Square.h"

#include "Book.h"
#include "EBook.h"

void Practice1()
{
	HybridWaterCar car1(100,200,300);
	car1.ShowCurrentGauge();
}

void Practice2()
{
	MyFriendDetailInfo friend1("오재영", 29, "서울", "010-xxxx-xxxx");
	friend1.ShowMyFriendDetailInfo();
}

void Practice3()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
}

void Practice4()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	std::cout << std::endl;
	EBook ebook("좋은 C++", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowBookInfo();
}

int main()
{
	Practice4();
}