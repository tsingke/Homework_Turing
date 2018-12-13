#include"example_graduate.h"

int main()
{
	char u[20] = "xiaoming";
	Graduate a(u, 1, 100, "math", "Mr_wang");
	a.show();
	Graduate b(a);
	b.show();
	Graduate c;
	c = a;
	c.show();

	rank_score(a);
    Student p;
	//p.show();
	int n;
	cout << "你想要输入的学生个数：";
	cin >> n;
	
	p.input(n);
	p.output_average(n);
	
	system("pause");
	return 0;

}
