#pragma once

class Book
{
private:
	char* title;	// å ����
	char* isbn;		// ����ǥ�� ������ȣ
	int price;		// å�� ����
public:
	Book(const char* _title, const char* _isbn, int price);
	void ShowBookInfo();
	~Book();
};