#pragma once


class University
{
	string name;
	list<Teacher> teachers;
	list<Student> students;

public:
	University() : name(), teachers(), students() {}

	University(string name, list<Teacher> teachers, list<Student> students)
	{
		this->name = name;
		this->teachers = teachers;
		this->students = students;
	}

	void getUniversityScore()
	{
		float result = 0;

		for (auto& i : students)
			result += i.score;

		cout << "University score : " << result << endl;
	}

	void showAllStudents()
	{
		for (auto& i : students)
			cout << i;
	}
};