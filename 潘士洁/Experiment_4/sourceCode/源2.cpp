#include<iostream>
#include<Windows.h>

using namespace std;
void ob(int a[],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < 20; k++) {
		cout << a[k]<<"  "<<endl;
	}
}
void average(int a[], int n) {
	double  average , variabce;
	double pl = 0;
	double  sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	average = sum / n;
	cout << "the average is" << average <<endl;
	for(int j=0;j<n;j++){
			pl = (a[j] - average)*(a[j] - average);
	}
	variabce = pl / n;
	cout << "the variabce is" << variabce <<endl;
}
int main() {
	int *a;
	a = new int[20];
	int temp_ = 0;                     //负数的个数
    int temp__=0;                     //正数的个数
	
	cout << "please enter 20 numbers" <<endl;
	for (int i = 0; i < 20; i++) {
		cin >> a[i];
		if (a[i] < 0) {
			temp_++;
		}
		else if (a[i] > 0) {
			temp__++;
	 }
	}
	cout << "the number of positive numbers is  " << temp__<<endl;
	cout << "the number of nagetive numbers is  " << temp_ << endl;
	ob(a, 20);
	average(a, 20);
	delete a;
	system("pause");
	return 0;
}
