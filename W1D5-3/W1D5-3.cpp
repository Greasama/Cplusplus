#include<iostream>
using namespace std;

//int fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	cout << fib(10);
//}

//int sum(int a)
//{
//	if (a == 1)
//		return 1;
//	return sum(a - 1) + a*a;
//}
//int main()
//{
//	cout << sum(100);
//}

//#define max(a,b)   ((a)>(b)?(a):(b))
//#define PI 3.1415926
//#define HeightLowChange(n) (((n<<8)&0xFF00)|((n>>8)&0xFF)|(n>>16<<16))
//int main()
//{
//    cout << max(1, 2 << 1);
//    cout << endl;
//    cout << HeightLowChange(0x0108);
//}

//int main()
//{
//	for (int a = 1; a <= 2023;a++)
//	{
//		for (int b = 1; b <= 2023; b++)
//		{
//			int c = a + b - 2023;
//			c *= c;
//			if (c==4*a*b)
//			{
//				cout << a << "," << b << endl;
//			}
//		}
//	}
//}

//int sum(int a)
//{
//	if (a == 1)
//		return 1;
//	return sum(a - 1) + a * a * a;
//}
//int main()
//{
//	cout << sum(30);
//}

int f(int n, int m) 
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result = (result * i) % m;//每一次的取模避免了溢值（更优算法）
    }
    return result;
}

int main() 
{
    int n = 100;
    int m = 99999;
    int result = f(n, m);
    cout << result << endl;
    return 0;
}

//int main()
//{
//	int sum = 1, k;
//	for (int i = 1; i <= 100; i++)
//	{
//		k = i % 99999;
//		sum = ((k % 99999) * sum) % 99999;//没有%99999时候在16时候出现溢值
//	}
//	cout << "(100!)%99999=" << sum;
//}