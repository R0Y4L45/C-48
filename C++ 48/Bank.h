#pragma once

class Bank
{
	list<BankCard> bankCards;

public:

	Bank() : bankCards() {}

	Bank(list<BankCard> _bankCards)
	{
		bankCards = _bankCards;
	}
};
