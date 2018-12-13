#include <iostream>
using namespace  std;
//------------------【child类】-----------------------------------
class Child             //1.定义小朋友节点类
{
public:
	int childNo;         //当前小孩的编号
	Child* left;    //记录小孩对象的左邻居
	Child* right;   //记录小孩对象的右邻居


public:
	Child(int id = 0) 	  //构造函数
	{
		childNo = id;
		left = NULL;
		right = NULL;
	}
};
//------------------【Circle类】----------------------------------
class Circle               // 定义圆圈游戏类
{
public:
	int scale;             //当前-正在参与游戏的人数
	Child children[1000];  //最初-参与游戏的小孩对象


public:
	Circle(int num = 1000) // 带默认值构造函数：初始化小孩节点
	{
		scale = num; //108
		for (int i = 0; i < num; i++)
		{
			children[i] = Child(i);
		}
	};

	//构建节点的循环链表函数：确立每个小孩的左右邻居
	void Build()
	{
		int i = 0;
		for (; i < scale; i++)
		{
			if (i == scale - 1)
				children[i].right = &children[0];
			else
				children[i].right = &children[i + 1];

		}
		if (i == scale)
			i = i - 1;
		for (; i >= 0; i--)
		{
			if (i == 0)
				children[i].left = &children[scale - 1];

			else
				children[i].left = &children[i - 1];
		}


	}
	//游戏运行函数：从当前节点顺时针循环开始数num个数
	void Run(int T)
	{
		int k;
		cout << "从第几个小孩开始游戏，请输入编号(k<109)：" << endl;
		cin >> k;
		int count = 0;
		Child* current = &children[k];
		while (scale > 1)
		{
			//Quit the circle：删除这个小孩   退出当前圆圈
			if (count == T)
			{

				current->left->right = current->right;
				current->right->left = current->left;
				scale--;
				count = 0;


			}
			else  //Count the next：继续数数游戏
			{
				count++;
				current = current->right;


			}
		}
		cout << "The last child id is " << current->childNo << endl;
	}
};

int main()
{
	Circle nodes(108); // 圆圈类内有108个节点对象（小孩）


	nodes.Build();


	nodes.Run(8);      // 开始循环运行数“8”的游戏，输出最后的获胜者

	system("pause");


	return 0;
}
