#include<iostream>

using namespace std;

float CheckAgeScore(int age,float score)
{
    if(age<19||age>25)
        throw age;
    if(score<0||score>5)
        throw score;
    return score*20;
}

int main{
    char *name;
    int age;
    float score;
    cout << "请输入学生姓名，年龄和成绩" << endl;
    cin >> name >> age >> score;
    try
    {
        age=CheckAgeScore(age,score);
        score=CjeckAgeScore(age,score);
        cout << "姓名：" << name << "年龄：" << age << "成绩：" << score << endl;

        catch(int)
        cout << "年龄输入错误" << endl;

        catch(float)
        cout << "成绩输入错误" << endl;
    }
    system("pause");
    return 0;
    }
