#pragma once

class Student
{
	friend class University;
	string name, surname, speciality;
	size_t money;
	float score;
	BankCard bankCard;
	vector<Exam> exams;

public:

	Student() : name(), surname(), speciality(), money(), score(), bankCard(), exams() {}

	Student(string _name, string _surname, size_t _money, float _score, BankCard _bankCard, vector<Exam> _exams)
	{
		name = _name;
		surname = _surname;
		money = _money;
		bankCard = _bankCard;
		exams = _exams;
	}

	void showBalance()
	{
		cout << "Balance : " << money << endl;
	}

	friend ostream& operator<<(ostream& out, Student& s);
};

ostream& operator<<(ostream& out, Student& s)
{
	out << "Name : " << s.name << endl;
	out << "Surname : " << s.surname << endl;
	out << "Money : " << s.money << endl;
	out << "Bank card : " << s.bankCard << endl;
	out << "Exams : " << endl;

	for (size_t i = 0; i < s.exams.size(); i++)
		out << s.exams[i] << endl;

	return out;
}