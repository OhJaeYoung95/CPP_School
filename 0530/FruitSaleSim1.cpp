#include <iostream>
#include "FruitSaleSim1.h"
using namespace std;

bool FruitSeller::InitMembers(const int price, const int num, int money)
{
	if (price <= 0)
	{
		cout << "사과 가격 0보다 큰 값 입력" << endl;
		return false;
	}
	else if (num <= 0)
	{
		cout << "사과의 갯수 0보다 큰 값 입력" << endl;
		return false;
	}

		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
		return true;
}
int FruitSeller::SaleApples(int money)
{

	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;

}
void FruitSeller::ShowSalesResult()
{
	cout << "남은 사과 : " << numOfApples << endl;
	cout << "판매 수익 : " << myMoney << endl;

}
bool FruitBuyer::InitMembers(const int money)
{
	if (money <= 0)
	{
		cout << "구매자 소지금 0보다 큰 값 입력" << endl;
		return false;
	}
	myMoney = money;
	numOfApples = 0;
	return true;
}
bool FruitBuyer::BuyApples(FruitSeller& seller, const int money)
{
	if (money <= 0)
	{
		cout << "입력한 금액을 0보다 큰 값으로 입력" << endl;
		return false;
	}
	else if (money > myMoney)
	{
		cout << "입력한 금액이 소지금 보다 큽니다" << endl;
		return false;
	}
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
	return true;
}
void FruitBuyer::ShowBuyResult()
{
	cout << "현재 잔액 : " << myMoney << endl;
	cout << "사과 개수 : " << numOfApples << endl << endl;
}
