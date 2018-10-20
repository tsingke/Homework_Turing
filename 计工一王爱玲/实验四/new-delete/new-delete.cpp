#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int cnt1 = 0, cnt2 = 0;
	int cnt3 = 0, cnt4 = 0;
	int *a = new int[20];
	for (int i = 0; i < 20; i++)
	{
		cin >> a[i];
		//scanf("%d", &a[i]);
		if (a[i] > 0)cnt1++;
		if (a[i] < 0)cnt2++;
		

	}
	cout << "the positive number is " << cnt1 << endl; 
	cout << "the negative number is " << cnt2 << endl;
	sort(a, a+20);
	for (int i = 0; i < 20; i++)
	{
		cout << a[i] << " ";
	}
	delete[]a;
	system("pause");
	return 0;
}
//12 -8 54 72 -5 -23 -47 45 56 89 18 15 -8 -9 -6 -7 14 28 37 19