#include<string>
#include<iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int age;
    char *name;
public:
    student(int m,char *n)
    {
        age=m;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    friend void disp(student&);
    ~student()
    {
        cout<<"delete it."<<name<<endl;
        delete []name;

    }

};
void disp(student &p)
{
    cout<<"student 'sname is"<<p.name<<",age is"<<p.age<<endl;

}
int main()
{
student A(18,"xiaowang");
student B(20,"xiaosong");
disp(A);
disp(B);
return 0;
}
