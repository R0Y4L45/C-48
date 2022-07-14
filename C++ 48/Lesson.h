#pragma once


class Lesson
{
	string name;

public:

	Lesson() : name() {}

	Lesson(string _name)
	{
		name = _name;
	}

	friend ostream& operator<<(ostream& out, Lesson& l);
};


ostream& operator<<(ostream& out, Lesson& l)
{
	out << "Lesson name : " << l.name << endl;
	return out;
}
