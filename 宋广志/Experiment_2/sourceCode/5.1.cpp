#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "ÇëÊäÈëXºÍY:\n" << endl;
	scanf_s("%d%d", &x, &y);
	sum =add(x,y);
	cout<< x <<'+'<< y <<'='<< sum << endl;
	system("pause");
	return 0;
}
int add(int a, int b)
{
	return a + b;
}