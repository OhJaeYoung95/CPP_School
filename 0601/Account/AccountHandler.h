#pragma once
#include "Account.h"
#define ACCOUNT_SIZE 128


class AccountHandler : public Account
{
private:
	Account* accounts[ACCOUNT_SIZE];	//Account �� ����, 128���� ������ �ִ°ž�,
	int count;
public:
	AccountHandler();
	~AccountHandler();

	void PrintMenu();
	bool Create(char* str, int id, int money);
	int Find(int id) const;	// false: -1
	bool Deposit(int id, int money);
	bool Withdraw(int id, int money);
	void PrintAll() const;
};