#pragma once

class NameCard
{
private:
	char* name;
	char* company;
	char* phoneNum;
	int rank;
public:
	NameCard(const char* _name, const char* _company, const char* _phone, int _rank);
	NameCard(NameCard&);

	~NameCard();

	void ShowNameCardInfo();
};