////example2_04：名字空间使用示例
//#include <iostream>  
//#include<windows.h>
//using namespace std;    		//using声明使用一个完整的名字空间std，C++中提供的名字
//    							//空间std涵盖了所有标准C++的定义和声明
//namespace one          			//定义一个名字空间one，里面有1个常量 M 和1个变量 inf
//{   const int M=200;
//    int inf=10;
//}                   			//后面不加分号
//namespace two         			//定义一个名字空间two，里面有2个变量：x 和	 inf
//{   int x;
//    int inf=-100 ; 
//}                   			//后面不加分号
//using namespace one ;   		//方法1：using声明使用一个完整的名字空间one，所有变量使用one里的值
//int  main()
//{   
//	using two::x ;       		//方法3：using声明仅使用名字空间two中的内容x
//	cout << "x=" << x << endl;	// x = 0
//    x=-100 ;            		//直接访问，相当于two::x=-100;
//	cout << "x=" << x << endl;
//
//	two::inf *= 2;         			//方法2：使用名字空间名::局部内容名操作未使用using声明的内容
//	cout << two::inf << endl; 		//同样是two中的内容，但是访问方式不一样
//
//	cout << "inf = " << inf << endl;//using声明使用了整个one，其所有成员直接访问
//	cout << "M = " << M << endl;
//	system("pause");
//    return  0;
//}
