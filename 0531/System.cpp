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
	cout << "--------------" << endl;
	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�̸�: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;

	account[accountNum++] = new AccountSystem(id, money, name);
	cout << "--------------";
	cout << endl << endl << endl;
}

// �� ��
void DepositMoney()
{
	int money;
	int id;
	cout << "--------------" << endl;
	cout << "[��   ��]" << endl;
	cout << "���� ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> money;
	cout << "�ԱݿϷ�" << endl;

	// �Ա�
	for (int i = 0; i < accountNum; i++)
	{	// ID��ȸ
		if (IdCheck(i, id))
		{
			account[i]->DepositMoney(money);
			return;
		}
	}
	cout << "--------------";

}

// �� ��
void WithdrawMoney()
{
	int money;
	int id;
	int index;
	cout << "--------------" << endl;
	cout << "[��   ��]" << endl;
	cout << "���� ID: ";
	cin >> id;
	// ID��ȸ
	for (int i = 0; i < accountNum; i++)
	{
		if (IdCheck(i, id))
		{
			index = i;
			break;
		}
	}
	cout << "��ݾ�: ";
	cin >> money;
	// �ܰ� Ȯ��
	while (money > account[index]->GetBalance()) 
	{
		cout << "�ܰ� �����մϴ�!" << endl;
		cin >> money;
	}
	cout << "��ݿϷ�" << endl;

	// ���
	account[index]->WithdrawMoney(money);

	cout << "--------------";
}


// �������� ��ü ��ȸ
void ShowAllAccInfo()
{
	for (int i = 0; i < accountNum; i++)
	{
		account[i]->ShowAllAccInfo();
	}
}

void Exit()
{
	for (int i = 0; i < accountNum; i++)
	{
		delete account[i];
	}
	cout << "���α׷� ����!" << endl;
	cout << "--------------";

}

bool IdCheck(int i, int id)
{
	return account[i]->GetId() == id;
}