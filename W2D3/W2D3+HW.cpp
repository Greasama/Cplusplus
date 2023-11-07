#include <iostream>
using namespace std;

//void disArry(int arr[], int len)//打印
//{
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << " ";
//	}
//	cout << endl;
//}
//
//void bubbleSort(int arr[], int len)//冒泡排序（优化版）
//{
//	int k = len - 1, pos = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 1;
//				pos = j;
//			}
//		}
//		k = pos;
//		if (flag == 0) return;
//		disArry(arr, 10);
//	}
//}
//
//bool check(int arr[], int size)//重复检测
//{
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size - 1; j++) {
//			if (arr[i] == arr[j]) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	srand((int)time(0)); 
//	int n[10]; 
//	for (int i = 0; i < 10; i++)
//	{
//		n[i] = rand() % 101;
//	}
//	disArry(n, 10);
//	bubbleSort(n, 10);
//	disArry(n, 10);
//	if (check(n, 10))
//		cout << "数据有重复！";
//	else
//		cout << "数据没有重复！";
//	cout << endl;
//	return 0;
//}//编程题59 原型

//int main()
//{
//	int a[3][4] = {
//	   {0, 1, 2,3} ,    /*  初始化索引号为 0 的行 */
//	   {4, 5, 6,7} ,    /*  初始化索引号为 1 的行 */
//	   {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
//	};
//	//int a[3][4] = {0,1,2,3,4,5,6,7,8,10,11 };
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "a[" << i << "][" << j << "]: ";
//			cout << a[i][j] << endl;
//		}
//	cout << endl;
//	for (int n = 0; n < 12; n++)
//	{
//		cout << "a[" << n / 4 << "][" << n % 4 << "]: ";
//		cout << a[n / 4][n % 4] << endl;
//	}
//}

//int main()
//{
//    int n[10];
//    int* p = n;
//    //char * p2 = (char *)n;//强制转换
//    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
//    for (int i = 0; i < 10; i++)
//    {
//        *p++ = rand() % 101;//*(p+i)<=>p[i]<=>n[i]<=>*(n+1)(但是n数值不能被修改)
//        //*p=rand()%101;p++
//    }
//    p = n;
//    for (int j = 0; j < 10; j++){
//        cout << *p++ << ",";
//    }
//}

//void mySwap(int* pa, int* pb)
//{
//	if (*pa > *pb){
//		int temp = *pa;
//		*pa = *pb;
//		*pb = temp;
//	}
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
//	mySwap(&a, &b);
//	mySwap(&a, &c);
//	mySwap(&b, &c);
//	cout << "从小到大排序：" << a << " " << b << " " << c << endl;
//}

//int main()
//{
//	char  strName1[] = "ab\0cdef";
//	char  strName2[7] = "abcdef";
//	char  strName3[6] = { 'a','b','c','d','e',0 };
//	char  strName4[6] = { 'a','b','c','d','e','f' };
//	const char* strName5 = "abcdef";//指针所指向的内容不能被修改
//	cout << (strName1 + 3) << endl;
//	cout << strName1 << endl;
//	strName2[1] = '0';
//	strName4[1] = '0';
//	cout << strName2 << endl;
//	cout << strName3 << endl;
//	cout << strName4 << endl;//会有乱码，因没有以\0结束
//	cout << strName5 << endl;
//}

//int main()
//{
//	char strName2[7] = "abcdef";
//	char* p1 = strName2;
//	while (*p1 != '\0'){
//		p1++;
//	}
//	int len = (int)(p1 - strName2);
//	cout << len;
//}

//int main()
//{
//    const char* words[] = { "零","一","二","三","四","五","六","七","八","九" };
//    const char* words2[] = { "十","百","千" };
//    int n;
//    cout << "输入一个小于10000的正整数:" << endl;
//    cin >> n;
//    int a[10] = {};
//    a[0] = n / 1000;//千
//    a[1] = n / 100 % 10;//百
//    a[2] = n / 10 % 10;//十
//    a[3] = n % 10;
//    if (a[0] != 0){
//        cout << words[a[0]] << words2[2];
//    }
//    if (a[1] != 0){
//        cout << words[a[1]] << words2[1];
//    }
//    else{
//        if (a[0] != 0){
//            cout << words[0];
//        }
//    }
//    if (a[2] != 0){
//        cout << words[a[2]] << words2[0];
//    }
//    else{
//        if (a[0] != 0 || a[1] != 0){
//            cout << words[0];
//        }
//    }
//    if (a[3] != 0){
//        cout << words[a[3]];
//    }
//}//数字汉语转化

//int main(int argc, char* argv[])
//{
//    for (int i = 0; i < argc; i++)
//        cout << "第" << (i + 1) << "个参数是： " << argv[i] << endl;
//    system("pause");
//}//尝试控制台（cmd）运行

//void Convert(int a, int b, int  Result[], int* Count)
//{
//	int _Count = 0;
//	while (a > 0)
//	{
//		Result[_Count] = a % b;
//		_Count++;
//		a = a / b;
//	}
//	*Count = _Count;
//}
//int main()
//{
//	int a;
//	int b;
//	int Result[20] = {};
//	int Count = 0;
//	cout << "录入一个10进制的数：" << endl;
//	cin >> a;
//	cout << "录入要转换的进制：" << endl;
//	cin >> b;
//	Convert(a, b, Result, &Count);
//	cout << "结果为：" << endl;
//	for (int i = Count - 1; i >= 0; i--)
//	{
//		if (Result[i] >= 10)
//		{
//			char temp2 = 'A' + Result[i] - 10;
//			cout << temp2;
//		}
//		else
//		{
//			cout << Result[i];  //数值0--9  ‘0’
//		}
//	}
//}//编程题66

//int reverseDigits(int number) {
//    int reversedNumber = 0;
//    while (number > 0) {
//        int lastDigit = number % 10;
//        reversedNumber = reversedNumber * 10 + lastDigit;
//        number /= 10;
//    }
//    return reversedNumber;
//}
//
//int main() {
//    try {
//        int num;
//        cout << "请输入一个正整数：";
//        cin >> num;
//        if (num <= 0) {
//            throw "输入必须是正整数";
//        }
//
//        int reversedNum = reverseDigits(num);
//        cout << "反转后的数字为: " << reversedNum << endl;
//    }
//    catch (const char* msg) {
//        cout << "错误: " << msg << endl;
//    }
//    return 0;
//}//编程211

//int  myStrlen(const char* str)
//{
//    //在这编写代码
//    int length = 0;
//    while (str[length] != '\0') {
//        length++;
//    }
//    return length;
//}
//int main()
//{
//    cout << myStrlen("123456") << endl;
//}//编程212

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
//    int num;
//    cout << "请输入一个正整数：";
//    cin >> num;
//    if (num <= 0) {
//        cout << "输入必须是正整数" << endl;
//    }
//    else {
//        primeFactorization(num);
//    }
//    return 0;
//}//编程72

//void convert(double Value, char result[], int delen)
//{
//    //在这编写代码
//
//}
//int main()
//{
//    int i = 1;
//    double  pi = 0;
//    while ((double)1 / i >= 0.00000001){
//        pi = pi + (double)1 / i - (double)1 / (i + 2);
//        i = i + 4;
//    }
//    pi *= 4;
//    char result[20] = {};
//    convert(pi, result, 10);
//    cout << result << endl;
//}//编程186
