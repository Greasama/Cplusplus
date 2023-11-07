#include <iostream>
#include "basefun.h"
using namespace std;

//int c;//全局变量只分配一次内存（即只初始化一次）
//int inc()
//{
//	static int a = 0;//局部静态变量，只初始化一次（只分配一次内存）
//	a++;
//	int b = 0;//一般局部变量，没调用一次函数重新分配一次内存，函数结束后内存收回
//	b++;
//	return a;
//}

int main()
{
	int n = 20;
	BA::showto2();
	cout << endl;
	BA::showto16();
	cout << endl;
//	cout << inc() << endl;
//	cout << inc() << endl;
//	cout << inc() << endl;
}