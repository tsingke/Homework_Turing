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
	Stu* pa = new Stu[20];
	cout << "please input the info of stu" << endl;
	int i = 0;
	string name;
	int age;
	int grade;
	int record = 0;
	while (cin >> pa[i].name >> pa[i].age >> pa[i].grade) {
		record++;
		i++;
	}
	for (int y = 0; y < record; y++) {
		cout << "第" << y+1 << "个学生 :" << endl;
		try {
			checkAgeScore(pa[y].age, pa[y].grade);
			cout << "姓名 :" << pa[y].name << endl;
			cout << "年龄 :" << pa[y].age << endl;
			cout << "百分制成绩 :" << checkAgeScore(pa[y].age, pa[y].grade) << endl;
		}
		catch (int a) {
			if (a % 2 == 0)
				cout << "error：成绩不在范围（0-5）内!" << endl;
			if (a % 3 == 0)
				cout << "error：年龄不在范围（16-20）内！" << endl;
		}
	}
	return 0;
}
