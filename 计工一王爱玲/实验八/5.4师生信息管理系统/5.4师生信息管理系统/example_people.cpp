//实现people.h中的类的成员函数
#include"people.h"
//Date类
void Date::set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int Date::getyear()
{
	return year;
}
int Date::getmonth()
{
	return month;
}
int Date::getday()
{
	return day;
}
//Person
Person:: Person()
{
	strcpy(name, "00");
}
void Person::input()
{
	cout << "请输入信息\n";
	cout << "姓名";
	cin >> name;
	cout << "编号";
	cin >> number;
	int y, m, d;
	cout << "出生日期（年，月，日）";
	cin >> y >> m >> d;
	birthday.set(y, m, d);
	cout << "性别（m/f）";
	cin >> sex;



}
void Person::output()
{
	cout << "姓名 "<<name<<endl;
	cout << "编号 "<<number<<endl;
	cout << "性别 ";
	if (sex == 'm')
		cout << "女"<<endl;
	else cout << "男"<<endl;
	cout << "出生日期 "<<birthday.getyear()<<'-'<<birthday.getmonth()<<'-'<<birthday.getday()<<endl;


}
char * Person::getname()
{
	return name;
}

//Student
void Student::input()
{
	Person::input();
	cout << "专业 ";
	cin >> speciality;
}
void Student::output()
{
	Person::output();
	cout << "专业 " << speciality << endl;

}
//Graduate
void Graduate::input()
{
	Student::input();
	cout << "研究课题 " << endl;
	cin >> researchtopic;
}

void Graduate::output()
{
	Student::output();
	cout << "研究课题 " << researchtopic << endl;
}
//Teacher
void Teacher::input()
{
	Person::input();
	cout<<"教师职称 ";
	cin >> academictitle;

}
void Teacher::output()
{
	Person::output();
	cout << "教师职称 " << academictitle << endl;
}
//PostgraduateOnjob
void PostgraduateOnjob::input()
{
	Graduate::input();
	cout << "职称 ";
	cin >> academictitle;
}
void PostgraduateOnjob::output()
{
	Graduate::output();
	cout << "职称 "<<academictitle<<endl;
	
}