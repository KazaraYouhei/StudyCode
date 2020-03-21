/*读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。*/
#include <iostream>
#include <vector>
#include "student_C.h"


int main() {
	std::string na_str, nu_str;
	int sc = 0, n = 0, max = 0, maxstu = 0, min = 10000000, minstu = 0;
	std::cin >> n;
	std::vector<student>stu(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> na_str >> nu_str >> sc;
		stu[i].stu(na_str, nu_str, sc);
	}
	for (int i = 0; i < n; i++)
	{
		if (stu[i].getINT() > max)
		{
			max = stu[i].getINT();
			maxstu = i;
		}
		 if (stu[i].getINT() < min)
		{
			min = stu[i].getINT();
			minstu = i;
		}
		
	}
	stu[maxstu].getSTR();
	stu[minstu].getSTR();
	return 0;
}
