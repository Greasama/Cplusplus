#include <iostream>
using namespace std;

//int myPow(int a, int b);
//int main()
//{
//	cout << myPow(2, 3) << endl;
//	cout << myPow(2, 8) << endl;
//}
//
//int myPow(int a, int b)
//{
//	int R = 1;
//	for (int i = 1; i <= b; i++)
//	{
//		R *= a;
//	}
//	return R;
//}

//bool checkPrime(int n);
//int main()
//{
//	for (int i = 2; i <= 100; i++)
//	{
//		if (checkPrime(i))
//		{
//			cout << i << endl;
//		}
//	}
//}
//
//bool checkPrime(int n)
//{
//	for (int j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}

//int myPowAdd(int a, int n);
//int main()
//{
//	cout << myPowAdd(2, 30) << endl;
//}
//
//int myPowAdd(int a, int n)
//{
//	int R = 1;
//	for (int i = 1; i <= n; i++) 
//	{
//		R += a;
//		a *= 2;
//	}
//	return R;
//}

//#include <vector>
//bool isPrime(int n)
//{
//	if (n <= 1)
//	{
//		return false;
//	}
//	for (int i = 2; i * i <= n; ++i)
//	{
//		if (n % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	vector<pair<int, int>> twinPrimes;
//	for (int n = 1; n <= 10000; ++n)
//	{
//		if (isPrime(n) && isPrime(n + 2))
//		{
//			twinPrimes.push_back(std::make_pair(n, n + 2));
//		}
//	}
//	cout << "10000以内的孪生素数对有:\n";
//	for (const auto& twinPrime : twinPrimes)
//	{
//		cout << twinPrime.first << ", " << twinPrime.second << std::endl;
//	}
//	return 0;
//}



//#include <cmath>
//using namespace std;
//
//bool isPerfectSquare(int num) {
//    if (num < 0)
//        return false;
//    int root = sqrt(num);
//    return (root * root == num);
//}
//int main() {
//    int num;
//    cout << "请输入一个正整数: ";
//    cin >> num;
//
//    if (isPerfectSquare(num)) {
//        int root = sqrt(num);
//        cout << num << " 是完全平方数，其平方根为 " << root << endl;
//    }
//    else {
//        cout << num << " 不是完全平方数" << endl;
//    }
//    return 0;
//}

//int is平方数(int a)
//{
//	for (int i = 1; i <= a; i++)
//	{
//		if (a == i * i)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	cout << "请输入一个整数" << endl;
//	int n;
//	cin >> n;
//	int a = is平方数(n);
//	if (a != -1)
//	{
//		cout << a;
//	}
//	else
//	{
//		cout << n << "不是完全平方数\n";
//	}
//}

//void showto2(long long n, int digit = 32)
//{
//    for (int i = digit - 1; i >= 0; i--)
//    {
//        if ((n & (1 << i)) != 0)
//        {
//            cout << 1;
//        }
//        else
//        {
//            cout << 0;
//        }
//    }
//}
//int main()
//{
//    showto2(3);
//    cout << endl;
//    showto2(10, 8);
//    cout << endl;
//    showto2((long long)(-2), 64);
//}//十进制转化二进制

void showto16(long long n, int digit = 32)
{
    int count = digit / 4;
    cout << "0x";
    for (int i = digit - 1; i >= 0; i--)
    {
        int a = (n >> i * 4) & 0xF;//十六进制转二进制方法：直接每一位变成二进制的四位数
        if (a<=9)
        {
            cout << a;
        }
        else
        {
            char c = 'A' + a - 10;
            cout << c;
        }
    }
}
int main()
{
    showto16(45,8);
    cout << endl;
}//十进制转化二进制