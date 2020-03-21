#ifndef STUDENT_H
#define STUDENT_H
class student {
public:
	student() {}
	void stu(std::string n, std::string m, int sc);
	student(student& s);
	int getINT() const;
	void getSTR() const;

private:
	std::string name, number;
	int score;
};

#endif
