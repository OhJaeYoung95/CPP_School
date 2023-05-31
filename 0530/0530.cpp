#include <iostream>
#include "FruitSaleSim1.h"
#include "Ring.h"
#include "NameCard.h"
#include "COMP_POS.h"

using namespace std;
using namespace COMP_POS;

// 160p / 166p / 

// 문제1

void Practice1()
{
	int sellerMoney = 0;
	int fruitAmount = 0;
	int fruitPrice = 0;

	FruitSeller seller;
	//cout << "사과의 가격 입력 : ";
	//cin >> fruitPrice;
	//cout << "과일 판매자가 지니고 있는 과일개수 입력 : ";
	//cin >> fruitAmount;
	//cout << "과일 판매자 소지금 입력 : ";
	//cin >> buyerMoney;
	
	do
	{
		cout << "사과의 가격 입력 : ";
		cin >> fruitPrice;
		cout << "과일 판매자가 지니고 있는 과일개수 입력 : ";
		cin >> fruitAmount;
		cout << "과일 판매자 소지금 입력 : ";
		cin >> sellerMoney;
	} while (!seller.InitMembers(fruitPrice, fruitAmount, sellerMoney));

	
	FruitBuyer buyer;
	int buyerMoney = 0;
	int buyerFruitAmout = 0;
	int buyFruit = 0;
	do
	{
		cout << "구매자 소지금 입력 : ";
		cin >> buyerMoney;
	} while (!buyer.InitMembers(buyerMoney));

	do
	{
		cout << "낸 금액 : ";
		cin >> buyFruit;
	} while (!buyer.BuyApples(seller, buyFruit));

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
}

// 문제2
void Practice2()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	//ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}

// 문제3
void Practice3()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
}


int main()
{
	Practice3();

	return 0;
}