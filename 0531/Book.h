#pragma once

class Book
{
private:
	char* title;	// 책 제목
	char* isbn;		// 국제표준 도서번호
	int price;		// 책의 정가
public:
	Book(const char* _title, const char* _isbn, int price);
	void ShowBookInfo();
	~Book();
};