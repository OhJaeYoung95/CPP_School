#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "AccountSystem.h"
#include "System.h"

using namespace std;
const int NAME_LEN = 20;

int accountNum = 0;
AccountSystem* account[100];
// �޴� ���
void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

// ���°���
void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�̸�: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;

	account[accountNum++] = new AccountSystem(id, money, name);
}

// �� ��
void DepositMoney()
{
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "���� ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> money;
	cout << "�ԱݿϷ�" << endl;

	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			account[i]->DepositMoney(money);
			return;
		}
	}
}

// �� ��
void WithdrawMoney()
{
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "���� ID: ";
	cin >> id;
	// id��ȸ
	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			id = account[i]->GetId();
			return;
		}
	}
	cout << "��ݾ�: ";
	cin >> money;
	do
	{
		cout << "�ܰ� �����մϴ�!" << endl;
		cin >> money;
	} while (money > account[id]->GetBalance());
	cout << "��ݿϷ�" << endl;

	for (int i = 0; i < accountNum; i++)
	{
		if (account[i]->GetId() == id)
		{
			account[i]->WithdrawMoney(money);
			return;
		}
	}
}

// �������� ��ü ��ȸ
void ShowAllAccInfo()
{

}