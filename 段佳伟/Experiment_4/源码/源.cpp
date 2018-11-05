#include<iostream>
#include<Windows.h>

using namespace std;
float checkAgeSvore(int age, float score) {
	char name='n';
	if (age < 16 || age>25) {
		throw age;
	}	
	if (score < 0 || score>5) {
		throw name;
	}
     return 0;
}

int main() {
	cout << "please enter your age and your score and your name";
	int age; float score;
	cin >> age  >> score;
	char name[100] = "lucy";
	cin >> name;
	try {
		cout << "--------message-----------" << endl;
		checkAgeSvore(age, score);
		score = score * 20;
		cout << "your score is " << score << endl;
		cout << "your age is " << age << endl;
	}
	catch (int age) {
		cout << "expect of age" << endl;
	}
	catch (char n) {
		cout << "expect of score" << endl;
	}
	cout << "your name is " << name << endl;
	cout << "-------------------------";
	system("pause");
	return 0;
}
