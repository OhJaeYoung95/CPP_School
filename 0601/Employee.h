#pragma once
class Employee
{
private:
	char name[100];
public:
	Employee(char* name);
	void ShowYourName() const;
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};