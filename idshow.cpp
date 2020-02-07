//id show
#include <iostream>
#include <string>

class birthDate
{
public:
	birthDate(int Byear, std::string Bmonth, std::string Bday);
	birthDate(const birthDate& birth);
	int getYear() { return year; }
	std::string getMonth() { return month; }
	std::string getDay() { return day; }
	~birthDate() {};
private:
	int year;
	std::string month,day;
};
birthDate::birthDate(int Byear = 2000,std::string Bmonth = "01", std::string Bday = "01") :year(Byear), month(Bmonth), day(Bday) {};
birthDate::birthDate(const birthDate& birth)
{
	year = birth.year;
	month = birth.month;
	day = birth.day;
}
class member
{
public:
	member(birthDate birt, std::string n, std::string na, std::string id, bool s);
	member(member const& mem);
	void showNum1();
	void showBirth(birthDate bir);
	void showNum2();
	bool isShowSex()
	{
		return sex;
	}
	~member() {};
private:
	birthDate bir;
	std::string number, idnum, name;
	bool sex;
};
member::member(birthDate birt, std::string n, std::string na, std::string id, bool s) :bir(birt)
{
	number = n;
	name = na;
	idnum = id;
	sex = s;
}
member::member(member const& mem):bir(mem.bir)
{
	number = mem.number;
	idnum = mem.idnum;
	name = mem.name;
	sex = mem.sex;
}
void member::showNum1()
{
	std::cout << number << std::endl;
	std::cout << name << std::endl;
}
void member::showBirth(birthDate bir)
{
	std::cout << bir.getYear() << "年" << bir.getMonth() << "月" << bir.getDay() << "日" << std::endl;
}
void member::showNum2()
{
	std::cout << idnum << std::endl;
}
int main()
{
	std::string numb, nam, id,m,d;
	bool sex=0;
	int y = 0;
	std::cout << "加入一组数据 应说明编号，姓名，生日，性别，身份证号" << std::endl;
	std::cin >> numb >> nam >> y >> m >> d >> sex >> id;
	birthDate bD(y, m, d);
	member mem(bD, numb, nam, id, sex);
	mem.showNum1();
	mem.showBirth(bD);
	sex = mem.isShowSex();
	if (sex)
		std::cout << "男" << std::endl;
	else
		std::cout << "女" << std::endl;
	mem.showNum2();
	return 0;
}
