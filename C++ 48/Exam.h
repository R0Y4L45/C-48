#pragma once



class Exam
{
	float point;
	Lesson lesson;
	bool wasPassed;
public:

	Exam() : point(), lesson(), wasPassed() {}

	Exam(float _point, Lesson _lesson, bool _wasPassed)
	{
		point = _point;
		lesson = _lesson;
		wasPassed = _wasPassed;
	}

	friend ostream& operator<<(ostream& out, Exam& e);
};


ostream& operator<<(ostream& out, Exam& e)
{
	out << e.lesson;
	out << "Point : " << e.point << endl;
	if(e.wasPassed)
		out << "Was Passed : " << "YES" << endl;
	else
		out << "Was Passed : " << "NO" << endl;

	return out;
}