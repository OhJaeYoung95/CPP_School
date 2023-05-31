#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

#include "EBook.h"
using namespace std;

EBook::EBook(const char* _title, const char* _isbn, int _price, const char* _DRMKey) : Book(_title, _isbn, _price)
{
	DRMKey = new char[strlen(_DRMKey) + 1];
	strcpy(DRMKey, _DRMKey);

}
void EBook::ShowBookInfo()
{
	Book::ShowBookInfo();
	cout << "ÀÎÁõÅ°: " << DRMKey << endl;

}
EBook::~EBook()
{
	delete[] DRMKey;
}
