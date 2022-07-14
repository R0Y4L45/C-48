#pragma once

class Group
{
	string name;
	list<Student> students;
	vector<Lesson> lessons;

public:
	Group() : name(), students(), lessons() {}

	Group(string _name, list<Student> _students, vector<Lesson> _lessons)
	{
		name = _name;
		students = _students;
		lessons = _lessons;
	}
};