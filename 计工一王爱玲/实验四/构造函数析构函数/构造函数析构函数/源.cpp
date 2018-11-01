#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class student {
private:
	char *spec;
public:
	student(char *p = 0);
	student(const student&r);
		~student();
	void show();
	
};
student::student(char *p)
{
	if (p)
	{
		spec = new char[strlen(p) + 1];
		strcpy(spec, p);

	}
}
student::student(const student &r)
{
	if (r.spec)
	{
		spec = new char[strlen(r.spec) + 1];
		strcpy(spec, r.spec);
	}
	else spec = 0;
}
student::~student()
{
	if (!spec)
	{
		delete[]spec;
	}
}
void student:: show()
{
	cout << "spec=" << spec << "\n";

}
int main()
{
	student zhang("computer");
	student wang(zhang);
	zhang.show();
	wang.show();
	return 0;
}