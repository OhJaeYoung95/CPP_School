#include <iostream>
#include <cstring>
#include "AccountSystem.h"
#include "System.h"

using namespace std;

enum Select
{
	MAKE =1,
	DEPOSIT,
	WITHDRAW,
	SHOWALL,
	EXIT
};

int main()
{
	int select = 0;
	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> select;

		switch (select)
		{
			case MAKE:
				MakeAccount();
				break;
				// �� ��
			case DEPOSIT:
				DepositMoney();
				break;
				// �� ��
			case WITHDRAW:

				break;
				// �������� ��ü ��ȸ
			case SHOWALL:

				break;
			case EXIT:

				break;

		}
	}


	return 0;
}