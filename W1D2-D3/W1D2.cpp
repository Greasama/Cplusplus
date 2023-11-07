#include <iostream>
using namespace std;
//int main()
//{
//	int a = 100, b = 200;
//	int c = a + b;
//	int d = a - b;
//	int e = a * b;
//	int f = a / b;
//	int g = 5 % 3;
//	cout << "a = " << a << " b = " << b << endl;
//	cout << "c = " << c << " d = " << d << " e = " << e << endl;
//	cout << "f = " << f << " g = " << g << endl;
//}


//int main()
//{
//	int a = 100, b = 200;
//	a++;//<==>a=a+1;  //++有对应一个CPU指令，速度要比a=a+1快
//	b--;//<==>b=b-1;  //--有对应一个CPU指令 
//	int c = a++;  //=>c=a;a++;
//	int d = ++b;  //=>b++;d=b;
//	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
//	a = 100;
//	c = (a++) + (++a); //= >++a;c=(a)+(a); a++;
//	cout << "a=" << a << " c=" << c << endl;
//}

//int main()
//{
//    int A = 1;
//    int C = 3;
//    C += A;//<==>C = C + A,  C+= A要比C=C+A速度快一些
//    //C++; C += 1;  C = C + 1;三个语句是等价，其中C++运行最快、C += 1次之
//    cout << "C=" << C << endl;
//    int a, b, c;
//    a = b = c = 1;//串联的赋值运算符，从右到左的方式进行
//}

//int main()
//{
//	int a = 4, b = 3;
//	bool c = (a <= b);
//	bool d = (a != b);
//	bool e = (a == b);
//	if (c)
//	{
//		cout << "a<=b" << endl;
//	}
//	if (d)
//	{
//		cout << "a!=b" << endl;
//	}
//	if (e)
//	{
//		cout << "a==b" << endl;
//	}
//}

//int main()
//{
//	int a, b, c;
//	cout << "输入变量a = " << endl;
//	cin >> a;
//	cout << "输入变量b = " << endl;
//	cin >> b;
//	cout << "输入变量c = " << endl;
//	cin >> c;
//	int max = a > b ? a : b;
//	max = max > c ? max : c;
//	int min = a > b ? a : b;
//	min = min > c ? max : c;
//	int mid = ((b <= a && a <= c) || (c <= a && a <= b)) ? a : ((a <= b && b <= c) || (c <= b && b <= a)) ? b : c;
//	a=
//}

//int main()
//{
//	bool a=true, b=false;
//	!(a || b) == (!a) && (!b);
//	if (!false)//&& || ！
//	{
//		cout << "真";
//	}
//	else
//	{
//		cout << "假";
//	}
//}

//#include <bitset>
//int main()
//{
//	int a = 111;
//	int b = 222;
//	cout << bitset<sizeof(unsigned long) * 8>(a) << "=" << a << endl;
//	cout << bitset<sizeof(unsigned long) * 8>(b) << "=" << b << endl;
//	int c = a & b;
//	cout << bitset<sizeof(unsigned long) * 8>(c) << "=" << c << endl;
//	int d = a | b;
//	cout << bitset<sizeof(unsigned long) * 8>(d) << "=" << d << endl;
//	int e = a ^ b;
//	cout << bitset<sizeof(unsigned long) * 8>(e) << "=" << e << endl;
//	int f = ~a;
//	cout << bitset<sizeof(unsigned long) * 8>(f) << "=" << f << endl;
//	int g = b << 2;
//	cout << bitset<sizeof(unsigned long) * 8>(g) << "=" << g << endl;
//	int h = b >> 2;
//	cout << bitset<sizeof(unsigned long) * 8>(h) << "=" << h << endl;
//}

//#include <bitset>
//int main()
//{
//	unsigned char a;
//	int b = 200;
//	cout << bitset<sizeof(unsigned long) * 8>(b) << "=" << b << endl;
//	a = unsigned(b);//显性转换
//	cout << bitset<sizeof(unsigned long) * 8>(a) << "=" << int(a) << endl;
//}

//int main()
//{
//    cout << bool(-1);
//}

//大小写字符转换
//int main()
//{
//	char c;
//	cout << "请输入字符："<<endl;
//	cin >> c;
//	char d = 0;
//	if (c >= 'a' && c <= 'z')
//	{
//		d = c - 32;
//	}
//	else if (c >= 'A' && c <= 'Z')
//	{
//		d = c + 32;
//	}
//	else c = 0;
//	//char d = c >= 'a' && c <= 'z' ? c - 32 : c >= 'A' && c <= 'Z' ? c + 32 : 0;//char大小写之间相差32
//	cout << d << endl;
//}

//int main()
//{
//	int a = 3 / 5;//所有的值是整数，则进行整数运算，进行取整
//	cout << a << endl;
//	double b = 3 / 5;//默认是整数运算，整数运算会取整
//	cout << b << endl;
//	double c = 1.00 / 3;//有double型时,才认为使用浮点运算。
//	c = (double)2 / 3;
//	/*浮点数实际上是二进制的科学计数法，
//	它无法准确表示大部分十进制的小数，
//	而只能在精度范围内尽量逼近。0.0045这样的数在内存中实际上可能是0.004499999，然后保留三位小数输出，就是0.004。
//	而0.00455内存中的实际值可能是0.004549999，保留三位小数就是0.5。*/
//	//浮点数本质：https://zhuanlan.zhihu.com/p/339949186
//	cout << c << endl;
//	int d = (int)(c + 0.5);//加0.5进行4舍五入
//	cout << d << endl;
//}

//#include <bitset>
//int main()
//{
//	int n = 500;
//	cout << bitset<32>(n) << "=" << n << endl;
//	cout << bitset<32>(0x80) << "=" << 0x80 << endl;
//	if ((n & 0x80)==0)
//	{
//		cout << "第八位是0" << endl;
//	}
//	else
//	{
//		cout << "第八位是1" << endl;
//	}
//}

//#include <bitset>
//int main()
//{
//	int n = 99;
//	cout << bitset<32>(n) << "=" << n << endl;
//	n = n | 0x80;
//	cout << bitset<32>(n) << "=" << n << endl;
//	int f = 500;
//	cout << bitset<32>(f) << "=" << f << endl;
//	//f = (f | 0x80) ^ 0x80;//先或置1，然后亦或置0
//	//f = (f & 0x80) ^ f;//与优先级大于亦或，加括号无意义
//	f = f & 0x80 ^ f;
//	cout << bitset<32>(f) << "=" << f << endl;
//}

//int main()
//{
//	int a, b;
//	cout << "输入变量a=" << endl;
//	cin >> a;
//	cout << "输入变量b=" << endl;
//	cin >> b;
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	cout << "从小到大排序：" << a << "," << b << endl;
//}

//int main()
//{
//	int a, b, c;
//	cout << "输入变量a\n";
//	cin >> a;
//	cout << "输入变量b\n";
//	cin >> b;
//	cout << "输入变量c\n";
//	cin >> c;
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	cout << "从小到大排:" << a << "," << b << "," << c << endl;
//}

//int main()
//{
//	int a, b;
//	cout << "输入变量a\n";
//	cin >> a;
//	cout << "输入变量b\n";
//	cin >> b;
//	if (a > b)
//	{
//		cout << "a > b" << endl;
//	}
//	else if (a == b)
//	{
//		cout << "a = b" << endl;
//	}
//	else
//	{
//		cout << "a < b" << endl;
//	}
//}

//int main()
//{
//    int score;
//    cout << "请输入学生分数：" << endl;
//    cin >> score;
//    score = score / 10 * 10;//去掉个位数
//    switch (score)
//    {
//    case 100:
//    case 90://score=90
//        cout << "Got A" << endl;
//        break;
//    case 80:
//        cout << "Got B" << endl;
//        break;//去掉break后，结果为BC
//    case 70:
//        cout << "Got C" << endl;
//        break;
//    default:
//        cout << "Got D" << endl;
//        break;//本break可去掉（结尾处无影响）
//    }
//    system("pause");
//}

//int main() {
//	int a = 14, b = 15, x;
//	char c = 'A';
//	x = (a && b) && (c < 'B');
//	cout << x << endl;
//}//习题33题
//
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int a = 5;
//	/*a += a -= a * a;*/
//	a += (a - 20);
//
//	cout << a;
//}//习题34题

//int main()
//{
//	int a = 55 | 78;
//	cout << "a=" << a << endl;
//	int b = 55 ^ 78 ^ 78;
//	cout << "b=" << b << endl;
//	int c = 55 >> 2;
//	cout << "c=" << c << endl;
//	int d = 55 << 2;
//	cout << "d=" << d << endl;
//	int e = 55 & 78;
//	cout << "e=" << e << endl;
//	int f = 9 & 10;
//	cout << "f=" << f << endl;
//	int g = (100 >> 8) & 0xFF;
//	cout << "g=" << g << endl;
//	int h = (1 << 5) ^ 0xFF;
//	cout << "h=" << h << endl;
//}

//int main()
//{
//	int a;
//	cout << "输入一个整数:";
//	cin >> a;
//	int tenDigit = (a / 10) % 10;//（a%100)/10
//	int unitDigit = a % 10;
//	cout << "十位数" << tenDigit << endl;
//	cout << "个位数" << unitDigit << endl;
//}

//#include <bitset>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	cout << "输入一个整数= \n";
//	cin >> a;
//	cout << endl << bitset<32>(a) << endl;
//	b = (a & 0x0F) << 4;
//	c = (a & 0xF0) >> 4;
//	/*
//	int a = c&0xF;
//	int b = (c&0FF)>>4;
//	int d = (a<<4)+b;
//	d=((c>>8)<<8)+d; //d=((c|0xFF) ^ 0xFF）+d;
//	cout<<d;
//	*/
//	int swapped = (b | c);
//	cout << endl << swapped << endl;
//	cout << endl << bitset<32>(swapped) << endl;
//}


//DAY3
//int main()
//{
//    char  c, d;
//    cout << "请输入一个字母\n";
//    cin >> c;
//    //char d = (c >= 'a' && c <= 'z') ? c - 32 : ((c >= 'A' && c <= 'Z') ? c + 32 : 0);
//    if (c >= 'a' && c <= 'z')
//    {
//        d = c - 32;
//
//    }
//    else
//        if ((c >= 'A' && c <= 'Z'))
//        {
//            d = c + 32;
//
//        }
//        else
//        {
//            d = 0;
//        }
//
//    if (d != 0)//模块化处理，方便维护
//    {
//        cout << d;
//    }
//    else
//    {
//        cout << "输入不是一个字符";
//    }
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//	/*while (i <= 10)
//	{
//		sum += i;
//		cout << "i = " << i << endl;
//		cout << "sum = " << sum << endl;
//		i++;//流程图判断在上
//	}*/
//	do
//	{
//		sum += i;
//		cout << "i = " << i << endl;
//		cout << "sum = " << sum << endl;
//		i++;//至少运行一次,流程图判断在下
//	} while (i <= 10);
//	cout << "sum = " << sum << endl;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 1;
//	int sum1 = 0;
//	while (i <= 8)
//	{
//		sum *= i;
//		i++;
//		cout << "i = " << i << endl;
//		cout << "sum = " << sum << endl;
//		sum1 += sum;//技巧：较少循环嵌套的示例
//	}
//	cout << "sum1=" << sum1 << endl;
//}

//int main() {
//	int c;
//	cout << "请输入所求的范围：" << endl;
//	cin >> c;
//	cout << "符合条件的数有:\n";
//	for (int num = 1; num <= c; ++num) {
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2) {
//			cout << num << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	double a = 1;
//	double b = 2;
//	double x = (a + b) / 2;
//	double y = x * x - 2;
//	int count = 0;
//	while (y > 0.0000001 || y < -0.0000001)
//	{
//		count++;
//		if (y > 0)
//			b = x;
//		else
//			a = x;
//		x = (a + b) / 2;
//		y = x * x - 2;
//	}
//	cout << "根号2" << "=" << x << endl;
//}

//int main()
//{
//	double a, b, c, num;
//	cout << "请输入一个正数：" << endl;
//	cin >> num;
//	if (num < 0)
//	{
//		cout << "输入错误，不能为负数" << endl;
//		return 0;
//	}
//	else if (num == 0 ||num == 1)
//	{
//		cout << num << endl;
//		return 0;
//	}
//	else if (num > 1)
//	{
//		a = 1; b = num;
//	}
//	else
//	{
//		a = 0; b = 1;
//	}
//	c = (a + b) / 2;
//	while (c * c - num < -0.000001 || c * c - num > 0.000001)
//	{
//		if (c * c - num > 0)
//		{
//			b = c;
//		}
//		else
//		{
//			a = c;
//		}
//		c = (a + b) / 2;
//	}
//	cout << c << endl;
//}//二分法求解根号

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 1000; i++)
//	{
//		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	cout << sum;
//}

//int main()
//{
//	for (int i = 1; i <= 10;i++)
//	{
//		if (i % 2 == 1)
//			continue;
//		cout << i << endl;
//	}
//}

//int main()
//{
//    int a = 10;
//LOOP:
//    do
//    {
//        if (a == 15)
//        {
//            a = a + 1;
//            goto LOOP;
//        }
//        cout << "a = " << a << endl;
//        a = a + 1;
//    } while (a < 20);
//    return 0;
//}

//int main()
//{
//	for (int i = 2; i <= 100; i++)
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
//			cout << i << " ";
//		}
//	}
//}

//#include<bitset>
//int main()
//{
//	cout << "设置只有一位是1：" << endl;
//	for (int i = 0; i < 8; i++)
//	{
//		unsigned char f;
//		f = (1 << i);//设置只有一位是0：f取反（~）
//		cout << bitset<8>(f) << endl;
//	}
//}
//！！！位运算常用

//#include<bitset>
//int main()
//{
//	for (int i = 0; i < 129; i++)
//	{
//		char a = (char)i;
//		cout << bitset<8>(i) << " = " << (int)a << "\t" << i << endl;
//	}
//}