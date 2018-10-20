#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int  checkAge(int age)
{
    if(age < 16 || age > 25)
        throw age;
    return age;
}

float checkScore(float score)
{
    if(score>5.0 || score <0.0)
    throw score;
    return score;
}

int main()
{
    string name;
    int age;
    float score;
    cin >> name >> age >> score;
    try
    {
        cout << "姓名： "<<name <<" " <<"年龄： "<< checkAge(age) <<" "<< "五级制成绩： " << checkScore(score) << endl;
    }
    catch(int)
    {
        cout << "年龄不符合要求，请输入处于16-25区间的年龄"<< endl;
    }
    catch(float)
    {
        cout <<"成绩不符合要求， 请重新输入五级制成绩" << endl;
    }
    return 0;
}
