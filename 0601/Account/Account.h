#pragma once
class Account
{
private:
	char* name;
	int id;
	int balance;

	void Release();

public:
	Account();
	Account(const char* name, int id, int balance);
	Account(const Account& ref);
	~Account();


	void SetName(const char*);
	int GetId() const;

	bool Deposit(int money);
	bool Withdraw(int money);

	void Print() const;
};

