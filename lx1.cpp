#include<iostream>
using namespace std;
#include <string>//用C++风格字符串时，要包含此类头文件
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

    //转义字符
    //换行符\n
    cout << "hello world\n";
    //反斜杠 \\

    cout <<"\\" << endl;
    //水平制表符 \t,\t会自动检测，每到8个字符就会自动补上8个空格,整齐输出数据
    cout << "aaa\thelloworld" << endl;
    cout << "aaa helloworld" << endl;

    //字符串型
    //C语言
    char s[] = "hello world";
    //C++
    string str2 = "hello world";

    //布尔类型bool，占用1个字节,true false就是0和1
    bool flag = false;
 

    system("pause");
    return 0;
}
