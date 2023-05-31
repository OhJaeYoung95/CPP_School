#pragma once
class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo();
	MyFriendInfo(const char* _name, int _age);
	void ShowMyFriendInfo();
	~MyFriendInfo();
};