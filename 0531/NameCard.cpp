#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "NameCard.h"
#include "COMP_POS.h"

using namespace std;
using namespace COMP_POS;

NameCard::NameCard(const char* _name, const char* _company, const char* _phone, int _rank) : rank(_rank)
{
	name = new char[strlen(_name) + 1];
	company = new char[strlen(_company) + 1];
	phoneNum = new char[strlen(_phone) + 1];
	//rank = _rank;
	strcpy(name, _name);
	strcpy(company, _company);
	strcpy(phoneNum, _phone);
}
NameCard::NameCard(NameCard& copy) : rank(copy.rank)
{
	name = new char[strlen(copy.name) + 1];
	company = new char[strlen(copy.company) + 1];
	phoneNum = new char[strlen(copy.phoneNum) + 1];
	strcpy(name, copy.name);
	strcpy(company, copy.company);
	strcpy(phoneNum, copy.phoneNum);
	cout << "깊은 복사 성공" << endl;
}
NameCard::~NameCard()
{
		delete[] name;
		delete[] company;
		delete[] phoneNum;
}
void NameCard::ShowNameCardInfo()
{
	cout << "이름: " << name << endl;
	cout << "회사: " << company << endl;
	cout << "전화번호: " << phoneNum << endl;
	switch (rank)
	{
	case CLERK:
		cout << "직급: 사원" << endl << endl << endl;
		break;
	case SENIOR:
		cout << "직급: 주임" << endl << endl << endl;
		break;
	case ASSIST:
		cout << "직급: 대리" << endl << endl << endl;
		break;
	case MANAGER:
		cout << "직급: 팀장" << endl << endl << endl;
		break;
	}
}