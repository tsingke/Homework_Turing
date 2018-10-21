#include<iostream>
#include<math.h>
using namespace std; 
int main() {
int *p; 
p = new int[20]; 	
int zheng = 0; 
int fu = 0; 	
double sum = 0; 	
int change; 	
double junzhi; 
double fangcha; 	
char s; 	
int n = 0; 
do { 
cin >> p[n]; 		
if (p[n] > 0) 
{ zheng++; }
else { fu++; } 		
sum = sum + p[n]; 	
n++; 		
s = getchar(); 
} while (s != '\n'); 	
cout << "正数的个数为：" << zheng << endl;
cout << "负数的个数为：" << fu << endl; 	
junzhi = sum / n; 	
cout << "均值为：" << junzhi << endl; 	sum = 0; 
for (int i = 0; i < n; i++)
{ sum = sum + (p[i] - junzhi)*(p[i] - junzhi); } 	
fangcha = sqrt(sum / n); 	
cout << "方差为：" << fangcha << endl; 	
for (int i = 1; i < n; i++) { 
	for (int i = 1; i < n; i++)
{ if (p[i] < p[i - 1]) 
{ change = p[i]; 			
	p[i] = p[i - 1]; 				
	p[i - 1] = change; } } } 	
cout << "排序为：" << endl; 	
for (int i = 0; i < n; i++) { cout << p[i]; } 	
cout << endl; 	system("pause"); 
return 0; }
