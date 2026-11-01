#include<iostream>
using namespace std;


int main()
{
	//选择结构 单行if语句
	//输入分数，大于600，就考上大学
	//if条件语句后面不要加分号
	/*int score = 0;
	cout << "请输入一个分数：";
	cin >> score;
	if (score > 600)
	{
		cout << score << endl;
	}*/
	
	//多行if语句
	//输入分数，大于600，就考上大学，小于等于600，就没考上大学
	/*int  score = 0;
	cout << "请输入一个分数：";
	cin >> score;
	if (score > 600)
	{
		cout << "恭喜你考上了大学" << endl;
	}
	else
	{
		cout << "恭喜你没考上大学" << endl;
	}*/

	//选择结构 多条件if语句
	//输入一个考试分数，大于600分，考上一本大学
	//大于500分，考上二本大学
	//大于400分，考上三本大学
	//小于等于400分，没考上，在屏幕上输出
	/*int score = 0;
	cout << "请输入考试分数：";
	cin >> score;
	if (score > 600)
	{
		cout << "恭喜你考上了一本大学" << endl;
	}
	else if (score > 500)
	{ 
		cout << "恭喜你考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你考上了三本大学" << endl;
	}
	else
	{
		cout << "你没考上" << endl;
		cout << "你的分数为：" << score << endl;
	}*/
	
	//嵌套if语句
	/*
	int score = 0;
	cout << "请输入考试分数：";
	cin >> score;
	cout << "你的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜你考上了一本大学" << endl;
		if (score > 700)
		{
			cout << "恭喜你考上了北大" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜你考上了清华" << endl;
		}
		else
		{
			cout << "恭喜你考上了人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜你考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你考上了三本大学" << endl;
	}
	else
	{
		cout << "你没考上" << endl;
		cout << "你的分数为：" << score << endl;
	}*/

	//三只小猪称体重
	/*
	int pigA = 0;
	int pigB = 0;
	int pigC = 0;
	cout << "小猪A的体重为：";
	cin >> pigA;
	cout << "小猪B的体重为：";
	cin >> pigB;
	cout << "小猪C的体重为：";
	cin >> pigC;
	if (pigA > pigB)
	{
		if (pigA > pigC)
		{
			cout << "小猪A最重" << endl;
			cout << "小猪A的体重为" << pigA << endl;
		}
		else if (pigA == pigC)
		{
			cout << "小猪A和小猪C最重且重量一样" << endl;
			cout << "小猪A和小猪C的体重为" << pigA << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
			cout << "小猪C的体重为" << pigC << endl;
		}
		
	}
	else if (pigA == pigB)
	{
		if (pigA > pigC)
		{
			cout << "小猪A和小猪B最重且重量一样" << endl;
			cout << "小猪A和小猪B的体重为" << pigA << endl;
		}
		else if (pigA == pigC)
		{
			cout << "三只小猪一样重" << endl;
			cout << "三只小猪的体重为" << pigA << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
			cout << "小猪C的体重为" << pigC << endl;
		}
	}
	else
	{
		if (pigB > pigC)
		{
			cout << "小猪B最重" << endl;
			cout << "小猪B的体重为" << pigB << endl;
		}
		else if (pigB == pigC)
		{
			cout << "小猪B和小猪C最重且重量一样" << endl;
			cout << "小猪B和小猪C的体重为" << pigB << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
			cout << "小猪C的体重为" << pigC << endl;
		}
	}
	*/
	
	//三目运算符
	//表达式1 ? 表达式2 : 表达式3
	//ab作比较，最大的赋给c
	//在C++中三目运算符返回的是变量，可以继续赋值
	/*int a = 10, b = 20, c = 0;
	c = (a > b ? a : b);*/

	//switch语句
	//给电影打分
	//10到9经典
	//8到7非常好
	//6到5一般
	//5以下烂片
	/*cout << "请给电影打分：";
	int score = 0;
	cin >> score;
	cout << "你打的分数为：" << score << endl;
	switch (score)
	{
		case 10:
			cout << "您认为的是经典电影" << endl;
			break;//结束switch，没有这个会一直往下执行
		case 9:
			cout << "您认为的是经典电影" << endl;
			break;
		case 8:
			cout << "您认为电影非常好" << endl;
			break;
		case 7:
			cout << "您认为电影非常好" << endl;
			break;
		case 6:
			cout << "您认为电影一般" << endl;
			break;
		case 5:
			cout << "您认为电影一般" << endl;
			break;
		default:
			cout << "您认为电影是烂片" << endl;
			break;
	}*/
	//switch判断时候只能是整型或者字符型，不可以是一个区间
	//switch结果清新，执行效率高
	system("pause");
	return 0;
}