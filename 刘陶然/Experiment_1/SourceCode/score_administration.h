#include<iostream>
#include<cstdio>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int num;  //学生人数

struct node_info
{
	char StudentID[20];    //学号
	char Name[20];         //姓名
	int common_score;      //平时成绩
	int experiment_score;  //实验成绩
	int final_score;	   //期末成绩
	double score;		   //最终成绩
	int rank;			   //名次
}Student[100];


int str_int(string str) {								//将字符串类型转换成整形类型
	int str_num = str.length();
	int sum = 0;
	for (int i = 0; i < str_num; i++) {
		sum *= 10;
		sum += str[i] - '0';
	}
	return sum;
}


void read_txt(string filename)
{
	string temp;
	ifstream readFile;
	readFile.open(filename);
	if (!readFile) {							//判断文件是否可以正常打开
		cout << "Cannot open the file\n" << endl;
		return;
	}
	//小知识 ： 如果可以正常打开：：getline(str, 100, 0) 可以输出空格，遇到delim符号才截止。 最后一个参数0表示文本框遇到空字符（ASCLL码为32，文本框不可能有空字符）截止符。不加第三个参数0时，表示'\n'为截止符('\n'也是换行符)。
	getline(readFile, temp);
	num = temp[0] - '0';						//读取第一行，人数
	for (int i = 1; i <= num; i++){ 				//将学生信息读入到结构体里面
		for (int j = 1; j <= 5; j++) { 
			if (j == 1) readFile >> Student[i].StudentID;
			if (j == 2) readFile >> Student[i].Name;
			if (j == 3) {
				readFile >> temp;
				Student[i].common_score = str_int(temp);
			}
			if (j == 4) {
				readFile >> temp;
				Student[i].experiment_score = str_int(temp);
			}
			if (j == 5) {
				readFile >> temp;
				Student[i].final_score = str_int(temp);
			}
		}
	}
	readFile.close();  //关闭文件
}


void information_view()  //成绩预览情况预览
{
	cout << "总人数 ： " << num << endl;
	cout << "        学号          姓名        平时成绩     实验成绩     期末成绩      最终成绩       排名" << endl;
	for (int i = 1; i <= num; i++) {
		printf("%15s, %10s, %10d, %10d, %10d, %13.2f, %10d\n", Student[i].StudentID, Student[i].Name, Student[i].common_score, Student[i].experiment_score, Student[i].final_score, Student[i].score, Student[i].rank);
		//cout << Student[i].StudentID << "     " << Student[i].Name << "     " << Student[i].common_score << "            " << Student[i].experiment_score << "           " << Student[i].final_score << endl;
	}
}


double calculate_final_score(node_info S)  //计算每个学生的总成绩
{
	double calculate_score = 0;
	calculate_score += S.common_score * 0.2 + S.experiment_score * 0.2 + S.final_score * 0.6;
	return calculate_score;
}


void calculate_all_students_final_score() //计算所有学生的最终成绩
{
	for (int i = 1; i <= num; i++) {
		Student[i].score = calculate_final_score(Student[i]);
	}
}


void calculate_mean_variance_and_analyze() //计算均值和方差并做出分析
{
	printf("\n\n		****** 所有学生的成绩分布情况 ******\n\n");
	double common_score_mean = 0, common_score_variance = 0;			 //平时成绩  均值/方差
	double experiment_score_mean = 0, experiment_score_variance = 0;	 //实验成绩  均值/方差
	double final_score_mean = 0, final_score_variance = 0;				 //期末成绩  均值/方差
	double score_mean = 0, score_variance = 0;						 //最终成绩  均值/方差
	double sum = 0;
	for (int i = 1; i <= 4; i++) {   //  | i == 1 时 计算平时成绩  均值/方差  | i == 2时  计算实验成绩  均值/方差 | ... 依次类推 
		for (int j = 1; j <= num; j++) {
			if (i == 1) sum += Student[j].common_score;  //计算总和
			if (i == 2) sum += Student[j].experiment_score;
			if (i == 3) sum += Student[j].final_score;
			if (i == 4) sum += Student[j].score;
		}

		if (i == 1) {
			common_score_mean = sum / (1.0 * num);  //计算均值
			for (int j = 1; j <= num; j++) {
				common_score_variance += pow( fabs ( Student[j].common_score - common_score_mean), 2);  //计算方差
			}
			common_score_variance /= (1.0 * num);
		}

		if (i == 2) {
			experiment_score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				experiment_score_variance += pow(fabs(Student[j].common_score - experiment_score_mean), 2);
			}
			experiment_score_variance /= (1.0 * num);
		}

		if (i == 3) {
			final_score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				final_score_variance += pow(fabs(Student[j].common_score - final_score_mean), 2);
			}
			final_score_variance /= (1.0 * num);
		}

		if (i == 4) {
			score_mean = sum / (1.0 * num);
			for (int j = 1; j <= num; j++) {
				score_variance += pow(fabs(Student[j].common_score - score_mean), 2);
			}
			score_variance /= (1.0 * num);
		}
		sum = 0; //再初始化为0；
	}

	cout << "      平时成绩      实验成绩     期末成绩     最终成绩" << endl;
	printf("均值：%10.2f %10.2f %10.2f %10.2f\n", common_score_mean, experiment_score_mean, final_score_mean, score_mean);
	printf("方差：%10.2f %10.2f %10.2f %10.2f\n\n\n", common_score_variance, experiment_score_variance, final_score_variance, score_variance);
	//cout << "均值:   " << common_score_mean << "        " << experiment_score_mean << "      " << final_score_mean << "     " << score_mean << endl;
	//cout << "方差:   " << common_score_variance << "      " << experiment_score_variance << "     " << final_score_variance << "      " << score_variance << endl;
	//			 平时成绩      实验成绩     期末成绩     最终成绩
	//	均值：     86.50       83.67          92.83      89.73
	//	方差：     30.92       38.94          71.03      41.37

	/* ********************************************************************************************** */
	//分析成绩：
	string str;
	ifstream readFile_2;			 //定义一个读文件对象
	readFile_2.open("analyse.txt");  //打开需要读出的文件
	readFile_2 >> str;				 //读取分析结果
	readFile_2.close();				 //关闭文件

	//string str = "\n分析：平时成绩、实验成绩比较稳定，而期末成绩最不平稳，可以看出期末成绩更能反应平时的努力程度，更有区分度。\n      相应的期末成绩的均值很高而方差却很大说明成绩的两级分化比较严重"; //现有分析
	
	int n = 0;
	printf("输入0查看现有分析情况：\n输入1修改分析\n");
	cin >> n;
	if (n == 0) cout << str << endl;
	else {
		ofstream writeFile_2;   //定义一个写文件对象
		writeFile_2.open("analyse.txt"); //打开需要写入的文件
		printf("请修改分析结果：\n");
		cin >> str;  
		writeFile_2 << str;       //讲str的内容写进去
		printf("\n修改成功\n");   
		writeFile_2.close();     //关闭文件
	}
}


int cmp(node_info A, node_info B)  //定义排名规则
{
	if (A.score >= B.score) return 1;
	return 0;
}


void all_students_rank()  //对所有学生进行排名
{
	sort(Student + 1, Student + 1 + num, cmp);
	for (int i = 1; i <= num; i++) {
		Student[i].rank = i;
	}
}


void search_student(string str) //按学号查找同学
{
	int flag = 0;
	for (int i = 1; i <= num; i++) {
		if (Student[i].StudentID == str) {
			cout << "        学号          姓名        平时成绩     实验成绩     期末成绩      最终成绩       排名" << endl;
			printf("%15s, %10s, %10d, %10d, %10d, %13.2f, %10d\n\n\n", Student[i].StudentID, Student[i].Name, Student[i].common_score, Student[i].experiment_score, Student[i].final_score, Student[i].score, Student[i].rank);
			flag = 1;
			break;
		}
	}
	if (flag == 0) printf("\n查询不到该同学，可能由于您输入的学号有误，请重新输入：\n");

}