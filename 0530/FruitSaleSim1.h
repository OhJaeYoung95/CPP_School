#pragma once

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	bool InitMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult();
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	bool InitMembers(int money);
	bool BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult();
};