#include <iostream>
#include <string>
using namespace std;

class Student
{
	char *specialty;
public:
	Student(char *pSpec = 0);  //构造函数声明
	~Student();
	void Show();
};

Student::Student(char *pSpec)
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy_s(specialty, 20,pSpec); //strcpy_s是安全函数，必须要对specialty增加长度限制
		cout << "pSpec为真"<<endl;
	}
	else 
	{
		specialty = 0;
		cout << "pSpec为假" << endl;
	}
	
}

Student::~Student()
{
	cout << "调用析构函数" << endl;
	delete[]specialty;  //specialty内存空间由new运算符分配，需要用delete释放空间
}

void Student::Show()
{
	cout << "specialty=" << specialty << endl;
}

int main()
{
	Student zhang("computer");	//调用普通的构造函数
	Student wang(zhang);		//调用系统提供的默认拷贝构造函数，此拷贝函数为浅拷贝，
	zhang.Show();
	wang.Show();                //经过Debug调试，得出在此语句结束后，显示异常。
								//因为在此函数语句结束后，系统调用对对象wang析构函数，
								//而由于是浅拷贝，wang.specialty所指向的值computer已经被对象zhang的析构函数释放了，
								//故wang的析构函数找不到释放的对象，发生报错

	return 0;
}