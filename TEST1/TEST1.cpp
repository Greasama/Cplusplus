#include <iostream>
using namespace std;

//编程1
//int main()
//{
//    int n = 1;
//    while (true) {
//        if (n % 3 == 1 && n % 5 == 2 && n % 7 == 6) {
//            cout << n << " ";
//            break;
//        }
//        n++;
//    }
//}

//编程3
//int main()
//{
//	int n = 15;
//	int a = 1, b = 1;
//	int c;
//	for (int i = 3; i <= n; i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	cout << "n = " << n << "时的斐波那契额数列值为" << "c = " << c << endl;
//	return 0;
//}

//编程3参考
//int fib(int num)
//{
//    if (num == 1 || num == 2)
//        return 1;
//    return fib(num - 1) + fib(num - 2);
//}
//int main()
//{
//    int sum = 0;
//    for (int i = 1; i <= 15; i++)
//    {
//        sum += fib(i);
//    }
//    cout << sum << endl;
//}

//编程3参考2
//int main()
//{
//	int a1 = 1, a2 = 1, sum = 0;;
//	for (int i = 1; i <= 15; i++)
//	{
//		//本次计算值
//		int a3 = a1 + a2;
//		//输出本次计算结果
//		cout << "a" << i << "=" << a1 << endl;
//		//为一下计算作准备
//		sum += a1;
//		a1 = a2;
//		a2 = a3;
//
//	}
//	cout << "前15项的和：" << sum << endl;
//}

//编程6
//void Convert(int a, int b, int  Result[], int* Count)
//{
//	int _Count = 0;
//	while (a > 0){
//		Result[_Count] = a % b;
//		_Count++;
//		a = a / b;
//	}
//	*Count = _Count;
//}
//int main()
//{
//	int a = 123456, b = 6;
//	int Result[20] = {};
//	int Count = 0;
//	Convert(a, b, Result, &Count);
//	cout << "结果为：" << endl;
//	for (int i = Count - 1; i >= 0; i--){
//		if (Result[i] >= 10){
//			char temp2 = 'A' + Result[i] - 10;
//			cout << temp2;
//		}
//		else{
//			cout << Result[i];
//		}
//	}
//}

//编程4
//void primeFactorization(int num) {
//    int divisor = 2;
//    cout << "因式分解结果为：" << num << " = ";
//    while (num > 1) {
//        if (num % divisor == 0) {
//            cout << divisor;
//            num /= divisor;
//            if (num > 1) {
//                cout << " * ";
//            }
//        }
//        else {
//            divisor++;
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    int num = 98604899;
//    primeFactorization(num);
//    return 0;
//}

//编程2
//#include <iomanip>
//double calculate(int n, double a, double x) {
//    double result = 1.0;
//    double term = 1.0;
//    for (int i = 1; i <= n; i++) {
//        term *= (a + i - 1) * x / i;
//        result += term;
//    }
//    return result;
//}
//int main() {
//    int n = 10000;
//    double a = 0.5;
//    double x = -0.5;
//    double result = calculate(n, a, x);
//    cout << fixed << setprecision(4);
//    cout << result << endl;
//    return 0;
//}

//编程2参看
//int main()
//{
//	double x = -0.5, a = 0.5, sum = 1, b = 1;
//	for (int n = 1; n <= 10000; n++)
//	{
//		b = (a - n + 1) * x * b / n;
//		sum += b;
//	}
//	cout << sum;
//}

//编程5
int main() {
    int n[12] = { 112, 14, 57, 6, 18, 5, 19, 11, 12, 13, 24, 31 };
    int x1 = 1; 
    int x2 = 1;  
    for (int i = 0; i < 12; i++) {
        if (n[i] % 2 == 0) {
            x1 *= n[i];
        }
        else {
            x2 *= n[i];
        }
    }
    int result = x1 - x2;
    cout << "所有偶数的积减去所有奇数的积为: " << result << endl;
    return 0;
}
