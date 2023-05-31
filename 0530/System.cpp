#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "AccountSystem.h"
#include "System.h"

using namespace std;
const int NAME_LEN = 20;

int accountNum = 0;
AccountSystem* account[100];
// 메뉴 출력
void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

// 계좌개설
void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> money;

	account[accountNum++] = new AccountSystem(id, money, name);
}

// 입 금
void DepositMoney()
{
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> money;
	cout << "입금완료" << endl;

	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			account[i]->DepositMoney(money);
			return;
		}
	}
}

// 출 금
void WithdrawMoney()
{
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	// id조회
	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			id = account[i]->GetId();
			return;
		}
	}
	cout << "출금액: ";
	cin >> money;
	do
	{
		cout << "잔고가 부족합니다!" << endl;
		cin >> money;
	} while (money > account[id]->GetBalance());
	cout << "출금완료" << endl;

	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			account[i]->WithdrawMoney(money);
			return;
		}
	}
}

// 계좌정보 전체 조회
void ShowAllAccInfo()
{

}