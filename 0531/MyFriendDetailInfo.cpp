#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "MyFriendDetailInfo.h"

using namespace std;

MyFriendDetailInfo::MyFriendDetailInfo() {}
MyFriendDetailInfo::MyFriendDetailInfo(const char* _name, int _age, const char* _addr, const char* _phone) : MyFriendInfo(_name, _age)
{
	addr = new char[strlen(_addr) + 1];
	phone = new char[strlen(_phone) + 1];
	strcpy(addr, _addr);
	strcpy(phone, _phone);
}
void MyFriendDetailInfo::ShowMyFriendDetailInfo()
{
	ShowMyFriendInfo();
	cout << "주소: " << addr << endl;
	cout << "전화: " << phone << endl;
}

MyFriendDetailInfo::~MyFriendDetailInfo()
{
	delete[] addr;
	delete[] phone;
}