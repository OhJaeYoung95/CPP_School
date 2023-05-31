#pragma once
#include "Book.h"

class EBook : public Book
{
private:
	char* DRMKey;	// 보안관련 키
public:
	EBook(const char* _title, const char* _isbn, int _price, const char* _DRMKey);
	void ShowBookInfo();
	~EBook();
};