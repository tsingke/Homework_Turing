#include<iostream>
#include<string>
using namespace std;

class Stu {
public:
	string name;
	int age;
	int grade;
};

float checkAgeScore(int age, float grade)
{
	if ((age <= 15 || age>25) && (grade < 0 || grade > 5))
		throw 6;
	else if (age <= 15 || age > 25)
		throw 3;
	else if (grade < 0 || grade > 5)
		throw 2;

	return float(20 * grade);
}

int main() {
	Stu pa;
	cout << "please input the info of stu" << endl;
	cin >> pa.name >> pa.age >> pa.grade;
	try {
		cout << endl;
		checkAgeScore(pa.age, pa.grade);
		cout << "姓名 " << pa.name << endl;
		cout << "年龄 " << pa.age << endl;
		cout << "百分制成绩 " << checkAgeScore(pa.age, pa.grade) << endl;
	}
	catch (int a) {
		if (a % 2 == 0)
			cout << "error：成绩不在范围（0-5）内!" << endl;
		if (a % 3 == 0)
			cout << "error：年龄不在范围（15-20）内！" << endl;
	}
	return 0;
}
