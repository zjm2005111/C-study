#include<iostream>
using namespace std;
#include<string>
#define Day 7

int main()
{
    //数据的输入cin，cin遇到空格和回车就停止读取
    /*int a = 0;
    cout << "请给a赋值：";
    cin >> a;
    cout << "a=" << a << endl;*/

    /*char ch = 'b';
    cout << "请给ch字符型赋值：";
    cin >> ch;
    cout << "ch=" << ch << endl;*/

    /*string str = "hello";
    cout << "给字符串str赋值：";
    cin >> str;
    cout << "str=" << str << endl;*/

    /*bool flag = false;//布尔类型。只要是非0的值都代表真
    cout << "请给布尔类型赋值：";
    cin >> flag;
    cout << "flag=" << flag << endl;*/

    //运算符
    /*int a1 = 10;
    int b1 = 3;
    //两个整数相除，结果依然是整数
    //两个数相除，除数不可以为0
    cout << a1 / b1 << endl;
    double d1 = 0.5;
    double d2 = 0.22;
    //两个小数相除，结果可以是小数*/

    //取模运算%，求余数，两个小数不可以做取模运算
    /*int c1 = 10;
    int c2 = 20;
    cout << c1 % c2 << endl;*/

    //++ --
    //前置递增,先让变量+1，然后进行表达式运算
    //后置递增，先进行表达式运算，后让变量+1
    /*int a1 = 10, a2 = 10;
    int b1 = ++a1 * 10;
    int c1 = a2++ * 10;
    cout << "b1=" << b1 << endl;
    cout << "c1=" << c1 << endl;
    cout << "a1=" << a1 << endl;
    cout << "a2=" << a2 << endl;*/

    //赋值运算符 =，+=，-=，*=，/=，%=
    /*int a = 10;
    a += 2;//a=a+2;*/

    //比较运算符
    //== != < > <= >=
    /*int a = 1, b = 2;
    cout << (a == b) << endl;//要加上括号，先做等于判断*/

    //逻辑运算符 ! && ||
    /*int a = 0;
    int b = 10;
    cout << (a && b) << endl;
    cout << (a || b) << endl;*/

    system("pause");
    return 0;
}

 