#include <iostream>
#include "FruitSaleSim1.h"
#include "Ring.h"
#include "NameCard.h"
#include "COMP_POS.h"

using namespace std;
using namespace COMP_POS;

// 160p / 166p / 

// ����1

void Practice1()
{
	int sellerMoney = 0;
	int fruitAmount = 0;
	int fruitPrice = 0;

	FruitSeller seller;
	//cout << "����� ���� �Է� : ";
	//cin >> fruitPrice;
	//cout << "���� �Ǹ��ڰ� ���ϰ� �ִ� ���ϰ��� �Է� : ";
	//cin >> fruitAmount;
	//cout << "���� �Ǹ��� ������ �Է� : ";
	//cin >> buyerMoney;
	
	do
	{
		cout << "����� ���� �Է� : ";
		cin >> fruitPrice;
		cout << "���� �Ǹ��ڰ� ���ϰ� �ִ� ���ϰ��� �Է� : ";
		cin >> fruitAmount;
		cout << "���� �Ǹ��� ������ �Է� : ";
		cin >> sellerMoney;
	} while (!seller.InitMembers(fruitPrice, fruitAmount, sellerMoney));

	
	FruitBuyer buyer;
	int buyerMoney = 0;
	int buyerFruitAmout = 0;
	int buyFruit = 0;
	do
	{
		cout << "������ ������ �Է� : ";
		cin >> buyerMoney;
	} while (!buyer.InitMembers(buyerMoney));

	do
	{
		cout << "�� �ݾ� : ";
		cin >> buyFruit;
	} while (!buyer.BuyApples(seller, buyFruit));

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
}

// ����2
void Practice2()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	//ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}

// ����3
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