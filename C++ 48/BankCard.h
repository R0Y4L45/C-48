#pragma once


class BankCard
{
	size_t long_code, expired_month, expired_year;
	string password;
	double balance;
public:

	BankCard() : long_code(), password(), expired_month(), expired_year(), balance() {}

	BankCard(size_t long_code, string password, size_t expired_month, size_t expired_year, double balance)
	{
		this->long_code = long_code;
		this->password = password;
		this->expired_month = expired_month;
		this->expired_year = expired_year;
		this->balance = balance;
	}

	friend ostream& operator<<(ostream& out, BankCard& b);
};

ostream& operator<<(ostream& out, BankCard& b)
{
	out << "Long Code : " << b.long_code << endl;
	out << "Password : " << b.password << endl;
	out << "Expired month and year : " << b.expired_month << '/' << b.expired_year << endl;
	out << "Balance : " << b.balance << endl;

	return out;
}
