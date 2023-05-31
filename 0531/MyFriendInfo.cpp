#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyFriendInfo.h"
using namespace std;

MyFriendInfo::MyFriendInfo() {}
MyFriendInfo::MyFriendInfo(const char* _name, int _age) : age(_age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}
void MyFriendInfo::ShowMyFriendInfo()
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
}

MyFriendInfo::~MyFriendInfo()
{
	delete[] name;
}