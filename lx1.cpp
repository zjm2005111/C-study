#include<iostream>
using namespace std;
//define定义的常量
#define Day 7

int main()
{
    cout << "一周总共有:" << Day << " 天" << endl;
    const int month = 12;//const修饰的变量也称为常量
    cout << "一年总共有：" << month << " 月" << endl;

    short num1 = 32768;//超出最大范围，就会表示最小 
    cout << "num1" << num1 << endl;

    //sizeof(数据类型/变量）占用内存大小
    short num2 = 10;
    cout << "short占用的内存空间为：" << sizeof(num2) << endl;

    //默认情况下输出是6位有效数字
    float f1 = 3.14f;//不加f默认是双精度

    //科学计数法
    float f2 = 3e2;//3*100
    float f3 = 3e-2;//3*0.01

    char ch = 'a';//单引号定义字符
    cout << int(ch) << endl;
    //a-97 A-65
    system("pause");
    return 0;
}

git clone git@github.com:zjm2005111/C-study.git
