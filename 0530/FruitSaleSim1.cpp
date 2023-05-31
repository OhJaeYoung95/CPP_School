#include <iostream>
#include "FruitSaleSim1.h"
using namespace std;

bool FruitSeller::InitMembers(const int price, const int num, int money)
{
	if (price <= 0)
	{
		cout << "��� ���� 0���� ū �� �Է�" << endl;
		return false;
	}
	else if (num <= 0)
	{
		cout << "����� ���� 0���� ū �� �Է�" << endl;
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
	cout << "���� ��� : " << numOfApples << endl;
	cout << "�Ǹ� ���� : " << myMoney << endl;

}
bool FruitBuyer::InitMembers(const int money)
{
	if (money <= 0)
	{
		cout << "������ ������ 0���� ū �� �Է�" << endl;
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
		cout << "�Է��� �ݾ��� 0���� ū ������ �Է�" << endl;
		return false;
	}
	else if (money > myMoney)
	{
		cout << "�Է��� �ݾ��� ������ ���� Ů�ϴ�" << endl;
		return false;
	}
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
	return true;
}
void FruitBuyer::ShowBuyResult()
{
	cout << "���� �ܾ� : " << myMoney << endl;
	cout << "��� ���� : " << numOfApples << endl << endl;
}
