#include<iostream> 

using namespace std;

int main()

{

	int *a;

	int i;

	a = new int[20];

	cout << "Please input 20 numbers:" << endl;

	for (i = 0; i < 20; i++)

	{

		cin >> a[i];



	}

	int cout1 = 0, cout2 = 0;

	for (i = 0; i < 20; i++)

	{

		if (a[i] > 0)

		{

			cout1++;

		}

		else

		{

			cout2++;

		}

	}

	cout << "The number of positive numbers is:" << cout1 << endl;

	cout << "The number of negative numbers is:" << cout2 << endl;



	float aver = 0;

	float var = 0;

	for (i = 0; i < 20; i++)

	{

		aver += a[i];

	}

	aver = aver / 20;

	cout << "The average of these figures is:" << aver << endl;

	for (int j = 0; j< 20; j++)

	{

		var += ((a[j] - aver), 2);



	}

	var = var / 20;

	cout << "The variance of these figures is:" << var << endl;

	float t;

	for (i = 0; i < 19; i++)

	{

		for (int j = i + 1; j < 20; j++)

		{

			if (a[i] > a[j])

			{

				t = a[i];

				a[i] = a[j];

				a[j] = t;

			}

		}



	}

	cout << "These numbers are exported from small to large:";

	for (i = 0; i < 20; i++)

	{

		cout << a[i] << " ";

	}

	delete[]a;



	system("pause");

	return 0;

}
