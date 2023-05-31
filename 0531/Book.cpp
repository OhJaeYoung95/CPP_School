#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

#include "Book.h"

using namespace std;

Book::Book(const char* _title, const char* _isbn, int _price) : price(_price)
{
	title = new char[strlen(_title) + 1];
	isbn = new char[strlen(_isbn) + 1];

	strcpy(title, _title);
	strcpy(isbn, _isbn);
}


void Book::ShowBookInfo()
{
	cout << "����: " << title << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "����: " << price << endl;
}


Book::~Book()
{
	delete[] title;
	delete[] isbn;
}