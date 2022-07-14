#pragma once

class Teacher
{
	string name, surname, department;
	size_t age, salary;
	list<Group> groups;
	BankCard bankCard;

public:

	Teacher() : name(), surname(), department(), age(), salary(), groups(), bankCard() {}

	Teacher(string _name, string _surname, string _department, size_t _age, size_t _salary, list<Group> _groups, BankCard _bankCard)
	{
		name = _name;
		surname = _surname;
		department = _department;
		age = _age;
		salary = _salary;
		groups = _groups;
		bankCard = _bankCard;
	}
};