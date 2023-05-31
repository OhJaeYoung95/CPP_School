#include <iostream>

#include "NameCard.h"
#include "COMP_POS.h"

using namespace COMP_POS;


int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}
