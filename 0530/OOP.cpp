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
		cout << "선택: ";
		cin >> select;

		switch (select)
		{
			case MAKE:
				MakeAccount();
				break;
				// 입 금
			case DEPOSIT:
				DepositMoney();
				break;
				// 출 금
			case WITHDRAW:

				break;
				// 계좌정보 전체 조회
			case SHOWALL:

				break;
			case EXIT:

				break;

		}
	}


	return 0;
}