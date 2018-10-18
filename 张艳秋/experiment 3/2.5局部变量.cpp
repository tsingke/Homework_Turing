#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int arr[3] = {0}, i = 123;
	cout << "i=" << i << endl;
	{
		for (int i = 0; i < 2; i++)
			arr[i] = (i + 5) * 10 + 3;
		cout << "i=" << i << endl;
		arr[2]++;
		cout << "i=" << i << endl;
	}

	cout << "i=" << i << endl;
	int sum = 0;
	for (i = 0; i < 3; i++)
		sum += arr[i];
	cout << "i=" << i << endl;
	for (i = 0; i < 3; i++)
		cout << setw(4) << arr[i];
	cout << endl;
	cout << "i=" << i << ",sum=" << sum << endl;


	system("pause");
	return 0;
	
}