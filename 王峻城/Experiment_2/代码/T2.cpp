//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int *a = arr;
//	int *&p = a; //p是指针类型引用
//	p++; //等价于a++
//	*p = 100; //等价于*a
//	cout << *a << " " << *p << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int b = 10;
//	p = &b; //a由指向arr变成了指向b
//	cout << *a << " " << *p << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}