#pragma once
#include "MyFriendInfo.h"
class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo();
	MyFriendDetailInfo(const char* _name, int _age, const char* _addr, const char*_phone);
	void ShowMyFriendDetailInfo();
	~MyFriendDetailInfo();
};