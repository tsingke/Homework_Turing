package 学生管理系统01;
import java.util.*;

public class Test{
	public static void main(String[]args) throws Exception{
		Scanner input = new Scanner(System.in);
		System.out.println("请输入学生人数:");
		int n = input.nextInt();
		Student[]stu = new Student[n];
		for(int i = 0; i<n; i++){
			stu[i] = new Student();
		}
		System.out.println("----请输入学生信息----");
		for(int i = 0; i<n; i++){
			stu[i].setNumber(input.nextInt());
			stu[i].setName(input.next());
			stu[i].setDailyScore(input.nextFloat());
			stu[i].setFinalScore(input.nextFloat());
		}
		System.out.println("----输入完毕----");
		System.out.println("----开始计算总成绩----");
		calcuScore(stu, n);
		System.out.println("----成绩计算完毕----");
		System.out.println("----总成绩排名为----");
		sortScore(stu, n);
		System.out.println("----总成绩排名完毕----");
		for(int i = 0; ;i++){
			System.out.println("----输入要查询的学号:----");
			long a = input.nextInt();
			if(a == 0)
				break;
			else{
				seeScore(stu, a, n);
			}
		}
		System.out.println("----查询完毕----");
		System.out.println("----成绩分析为----");
		analyzeScore(stu, n);
		System.out.println("----程序结束----");
	}
	public static void calcuScore(Student[]stu, int n){  //计算总成绩
		for(int i = 0; i<n; i++){
			double score = 0.2*stu[i].getDailyScore() + 0.8*stu[i].getFinalScore();
			stu[i].setGeneralScore(score);
		}
	}
	public static void sortScore(Student[]stu, int n){  //总成绩排名并打印
		for(int i = 0; i<n-1; i++){
			for(int j = 0; j<n-i-1; j++){
				if(stu[j].getGeneralScore() > stu[j+1].getGeneralScore()){
					Student stu01 = new Student();
					stu01 = stu[j];
					stu[j] = stu[j+1];
					stu[j+1] = stu01;
				}
			}
		}
		for(int i = 0; i<n; i++){
			System.out.println("我的名字叫" + stu[i].getName() + ",我的学号是:" + stu[i].getNumber() + ",我的总成绩是" + stu[i].getGeneralScore() + ",我的排名为第" + (i+1) + "名");
		}
	}
	public static void seeScore(Student[]stu, long number, int n){  //根据学号查询成绩
		for(int i = 0; i<n; i++){
			if(stu[i].getNumber() == number){
				System.out.println("我的名字叫" + stu[i].getName() + ",我的平时成绩:" + stu[i].getDailyScore() + ",我的期末成绩:" + stu[i].getFinalScore() + "我的总成绩:" + stu[i].getGeneralScore());
			}
		}
	}
	public static String analyzeScore(Student[]stu, int n){  //成绩分析
		double m = 0;  //中间值
		double s = 0;  //中间值
		double meanValue = 0;  //均值
		double s2 = 0;  //方差
		for(int i = 0; i<n; i++){
			m += stu[i].getGeneralScore();
		}
		meanValue = m/n;
		for(int i = 0; i<n; i++){
			s += (stu[i].getGeneralScore() - meanValue) * (stu[i].getGeneralScore() - meanValue);
		}
		s2 = s/n;
		System.out.println "该课成绩的平均值为:" + meanValue + ",方差为" + s2;
	}

}

class Student{  //学生类的定义
	private long number;  //学号
	private String name;  //姓名
	private double dailyScore;  //平时成绩
	private double finalScore;  //期末成绩
	private double generalScore;  //总成绩
	public long getNumber(){
		return number;
	}
	public void setNumber(long number){
		this.number = number;
	}
	public String getName(){
		return name;
	}
	public void setName(String name){
		this.name = name;
	}
	public double getDailyScore(){
		return dailyScore;
	}
	public void setDailyScore(double dailyScore){
		this.dailyScore = dailyScore;
	}
	public double getFinalScore(){
		return finalScore;
	}
	public void setFinalScore(double finalScore){
		this.finalScore = finalScore;
	}
	public double getGeneralScore(){
		return generalScore;
	}
	public void setGeneralScore(double generalScore){
		this.generalScore = generalScore;
	}
}