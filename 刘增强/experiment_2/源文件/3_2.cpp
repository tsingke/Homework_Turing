#include<iostream>
#include<Windows.h>
using namespace std;
const float pai = 3.14;
void circle_S(double r);
int main()
{
	float r;
	cout << "please input the r:" << endl;
	cin>>r;
	circle_S(r);
	system("pause");
	return 0;

}
void circle_S(double r)
{
	cout << "���Ϊ��" << endl << pai * r*r << endl;
	cout << "�ܳ�Ϊ��" << endl << 2 * pai*r << endl;
}
