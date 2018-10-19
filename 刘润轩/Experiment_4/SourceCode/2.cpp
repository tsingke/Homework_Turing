#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
float checkAgeScore(int age, float score);
int main()
{
	string name;
	int age;
	float score;
	bool flag = false;
	cout << "input data...." << endl;
	getline(cin, name);
	do {
		flag = false;
		cin >> age >> score;
		try {
			checkAgeScore(age, score);
		}
		catch (invalid_argument const &ex) {
			cerr << "参数非法 ： " << ex.what() << endl;
			flag = true;
			cout << "重新输入学生 :" << name << "的age and score..." << endl;
		}
	} while (flag);

	cout << "姓名：" << name << endl;
	cout << "年龄：" << age << endl;
	cout << "百分制成绩为： " << score * 20 << "%" << endl;

	system("pause");
}



float checkAgeScore(int age, float score) {
	if (age < 16 || age>25)
		throw invalid_argument("年龄非法...");
	if (score < 0 || score>5)
		throw invalid_argument("分数非法...");


}
