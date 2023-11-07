#include <iostream>
using namespace std;

//int main()
//{
//	int a = 1;
//	int b = 0;
//	for (int i = 0; i < 31; i++)
//	{
//		b += a;
//		a *= 2;
//	}
//	cout << b;
//}
// 
//int main()
//{
//	int i = 0, num = 0;
//	while (i<31)
//	{
//		num += pow(2, i);
//		i++;
//		cout << num << endl;
//	}
//	cout << num;
//}

//int main()
//{
//	int a = 1;
//	int n;
//	cout << "请输入所求项：" << endl;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		a = 2 * a + 1;
//		cout << a << endl;
//	}
//	cout << "所求第" << n << "项的值为：" << a << endl;
//}

//int main()
//{
//	int count = 0;
//	for (int a = 1; a <= 100; a++)
//		for (int b = a; b <=100; b++)
//			for (int c = 1; c <= 100; c++)
//			{
//				if (a * a + b * b == c * c)
//				{
//					cout << a << " " << b << " " << c << endl;
//					count++;
//				}
//			}
//	cout << "总共" << count << "对勾股数" << endl;
//}

//int main()
//{
//	int n;
//	cout << "输入一个整数= \n";
//	cin >> n;
//	if (n <= 2)
//	{
//		cout << "n = " << n << "时的斐波那契额数列值为" << "c = " << 1 << endl;
//		return 1;
//	}
//	int a = 1;
//	int b = 1;
//	int c;
//	for (int i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	cout << "n = " << n << "时的斐波那契额数列值为" << "c = " << c << endl;
//	return 0;
//}

//int main()
//{
//	int a1 = 1, a2 = 1;
//	for (int i = 1; i <= 18; i++)
//	{
//		int a3 = a1 + a2;
//		cout << "a" << i << "=" << a1 << endl;
//		a1 = a2;
//		a2 = a3;
//	}
//}

//int main()
//{
//	int num;
//	cout << "请输入一个正整数: ";
//	cin >> num;
//	int i = 1;//在需要判定是一般要加个参数，用变量控制
//	while (i * i < num)
//	{
//		i++;
//	}
//	if (i * i == num)
//	{
//		cout << "是完全平方数，平方根为: " << i << endl;
//	}
//	else
//	{
//		cout << "不是完全平方数" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout << "输入一个正整数\n";
//	cin >> a;
//	bool is平方数 = false;
//	int b = 0;
//	for (int i = 1; i <= a; i++)
//	{
//		if (a == i * i)
//		{
//			is平方数 = true;
//			b = i;
//			break;
//		}
//	}
//	if (!is平方数)
//	{
//		cout << a << "不平方数";
//	}
//	else
//	{
//		cout << a << "的平方数是：" << b;
//	}
//}

//int main()
//{
//	double a = 1;
//	double b = 0;
//	double x = 1;
//	double e = 0.000001;
//	for (int n = 0; abs(a) >= e; n++)
//	{
//		a = x / (2 * n + 1) * pow(-1, n);
//		b += a;
//	}
//	double c = 4 * b;
//	cout << c << endl;
//}

//int main()
//{
//	double c = 1;
//	double sum = 0;
//	for (int i = 1; 1.0 / i > 0.000001; i+=2)
//	{
//		double a = c / i;//去掉c变量的方法：(((i + 1)/2) % 2) * 2 - 1 (可读性变差)
//		sum += a;
//		c = -c;
//	}
//	sum *= 4;
//	cout << sum;
//}

//int main()
//{
//	double a = 1;
//	double sum = 1;
//	for (int n = 1; n <= 100; n++)
//	{
//		a *= n;
//		sum += 1/a;
//	}
//	double e = sum;
//	cout << "e=" << e << endl;
//}

//int main()
//{
//	int a = 0;
//	cout << "请输入下限：" << endl;
//	cin >> a;
//	int b = 0;
//	cout << "请输入上限：" << endl;
//	cin >> b;
//	cout << "范围内输出的素数如下：" << endl;
//	for (int i = a; i <= b; i++)
//	{
//		bool IsPrime = true;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				IsPrime = false;
//				break;
//			}
//		}
//		if (IsPrime)
//		{
//			cout<< i << endl;
//		}
//	}
//}

//#include <vector>
//bool isPrime(int n) 
//{
//    if (n <= 1) 
//    {
//        return false;
//    }
//
//    for (int i = 2; i * i <= n; ++i) 
//    {
//        if (n % i == 0) 
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main() {
//    vector<pair<int, int>> twinPrimes;
//
//    for (int n = 1; n <= 10000; ++n) 
//    {
//        if (isPrime(n) && isPrime(n + 2)) 
//        {
//            twinPrimes.push_back(std::make_pair(n, n + 2));
//        }
//    }
//    cout << "10000以内的孪生素数对有:\n";
//    for (const auto& twinPrime : twinPrimes) 
//    {
//        cout << twinPrime.first << ", " << twinPrime.second << std::endl;
//    }
//    return 0;
//}

//int main()
//{
//	for (int n = 1; n <= 10000; n++)
//	{
//		int i;
//		for (i = 2; i <= n; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			int j = n + 2;
//			int k;
//			for (k = 2; k <= j; k++)
//			{
//				if (j % k == 0)
//				{
//					break;
//				}
//			}
//			if (j == k)
//			{
//				cout << j << "," << k << endl;
//			}
//		}
//	}
//}

//int main()
//{
//	int n;
//	cout << "输入一个正整数：\n";
//	cin >> n;
//	cout << n << "=";
//	int i = 2;
//	while (i <= n)
//	{
//		if (n % i == 0)
//		{
//			if (n == i)
//			{
//				cout << i ;
//				break;
//			}
//			else 
//			{
//				cout << i << "*" ;
//				n /= i;
//			}
//		}
//		else
//			i++;
//	}
//}

//int main()
//{
//	int count = 0;
//	for (int a = 2; a <= 100; a++)
//	{
//		int i = 2;//累加a的因子个数
//		int n = a;
//		while (i <= n)
//		{
//			if (n % i == 0)
//			{
//				count++;
//				n /= i;
//			}
//			else
//				i++;
//		}
//		cout << a << "!中因子的个数是：\t" << count << endl;
//	}
//	cout << "100!中因子的个数是：" << count << endl;
//}

//int main()
//{
//	int count = 0;
//	int a = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		int a = i * i;
//		count += a;
//		cout << count << endl;
//	}
//	cout << "数列和的值为：" << count << endl;
//}

int main()
{
	double x = 1, a = 0.5, sum = 1;
	double b = 1;
	for (int n = 1; n <= 100; n++)
	{
		b = (a - n + 1) * x * b / n;
		sum += b;
	}
	cout << sum;
}