#pragma once
#include "Book.h"

class EBook : public Book
{
private:
	char* DRMKey;	// ���Ȱ��� Ű
public:
	EBook(const char* _title, const char* _isbn, int _price, const char* _DRMKey);
	void ShowBookInfo();
	~EBook();
};