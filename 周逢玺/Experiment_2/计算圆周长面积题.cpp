#include <iostream>
#include <windows.h>
using namespace std;
class circular
{
private:
	const double Pi = 3.1415926;
	double rad;
	double per;
	double area;
public:
	circular(double r)
	{
		rad = r;
		per = 2*Pi*rad;
		area = Pi*rad*rad;
	}
	void out()
	{
		cout << "圆的周长=" << per << endl;
        cout << "圆的面积=" << area << endl;
	}

}; 
int main()
{
	int r;
	cout << "输入圆的半径" << endl;
	cin >> r;
	circular p1(r);
	p1.out();
	system("pause");
	return 0;
	
}