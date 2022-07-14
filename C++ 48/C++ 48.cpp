#include <iostream>
#include <vector>
#include <list>

using namespace std;


#include "BankCard.h"
#include "Bank.h"
#include "Lesson.h"
#include "Exam.h"
#include "Student.h"
#include "Group.h"
#include "Teacher.h"
#include "University.h"


int main()
{
	Lesson l1("asd1");
	Lesson l2("asd2");
	Lesson l3("asd3");
	Lesson l4("asd4");

	vector<Lesson> ls;
	ls.push_back(l1);
	ls.push_back(l2);
	ls.push_back(l3);
	ls.push_back(l4);

	vector<Exam> e;
	e.push_back(Exam(2.1, l1, false));
	e.push_back(Exam(2.2, l2, true));
	e.push_back(Exam(2.3, l3, false));
	e.push_back(Exam(2.4, l4, true));





	BankCard b(123123123123, "pass", 12, 2024, 3000);
	list<Student> st;
	st.push_back(Student("asd1", "as1", 14, 4.5, b, e));
	st.push_back(Student("asd2", "as2", 15, 4.6, b, e));
	st.push_back(Student("asd3", "as3", 16, 4.7, b, e));
	st.push_back(Student("asd4", "as4", 17, 4.8, b, e));



	Group g1("group1", st, ls);
	Group g2("group2", st, ls);
	Group g3("group3", st, ls);
	Group g4("group4", st, ls);

	list<Group> gs;
	gs.push_back(g1);
	gs.push_back(g2);
	gs.push_back(g3);
	gs.push_back(g4);

	Teacher t1("asd1", "dsa1", "department1", 24, 750, gs, b);
	Teacher t2("asd2", "dsa2", "department2", 24, 750, gs, b);
	Teacher t3("asd3", "dsa3", "department3", 24, 750, gs, b);
	Teacher t4("asd4", "dsa4", "department4", 24, 750, gs, b);

	list<Teacher> ts;

	ts.push_back(t1);
	ts.push_back(t2);
	ts.push_back(t3);
	ts.push_back(t4);

	University u("Uni", ts, st);
}
