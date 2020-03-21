#include <iostream>
#include "student_C.h"

void student::stu(std::string n, std::string m, int sc) {
	name = n;
	number = m;
	score = sc;
}
student::student(student& s) {
	name = s.name;
	number = s.number;
	score = s.score;
}
int student::getINT() const
{
	return score;
}
void student::getSTR() const
{
	std::cout << name << " " << number << std::endl;
}
