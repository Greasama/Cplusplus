#include<iostream>
using namespace std;

//int main()
//{
//	int a[3][4] = {
//	{0,1,2,3},
//	{4,5,6,7},
//	{8,9,10,11}
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "a[" << i << "][" << j << "]:";
//			cout << a[i][j] << endl;
//		}
//	}
//	cout << endl;
//	//for (int n = 0; n < 3 * 4; n++)
//	//{
//	//	cout << "a[" << n/4 << "][" << n%4 << "]:";
//	//	cout << a[n/4][n%4] << endl;
//	//}//一维方式初始化
//}

//void mySwap(int* pa, int* pb)
//{
//	if (*pa > *pb)
//	{
//		int temp = *pa;
//		*pa = *pb;
//		*pb = temp;
//	}
//}
//int main()
//{
//	int a, b, c;
//	cout << "请输入变量:" << endl;
//	cin >> a >> b >> c;
//	mySwap(&a, &b);
//	mySwap(&a, &c);
//	mySwap(&b, &c);
//	cout << "从小到大排序：" << a << "," << b << "," << c << endl;
//}

//int main() 
//{
//	char str[] = "job", * p = str;
//	cout << *(p + 2) << endl;
//}

//void main()
//{
//	const char *p[] = { "mop","book","w","sp" };
//	int i;
//	for (i = 3; i >= 0; i--, i--)
//		cout << *p[i];
//	cout << endl;
//}

//void inverse(char* str)
//{
//	// 定义char数组指针0
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') { // 指向最后一个结点
//		end++;
//	}
//	// 交换头和尾的值
//	char temp;
//	--end; // 去除\0的位置
//	for (; start < end; start++, end--){
//		temp = *start;
//		*start = *end;
//		*end = temp;
//	}
//}//另一个思路
// 
//int length = 0;
//while (str[length] != '\0') {
//    length++;
//}
//for (int i = 0; i < length / 2; i++) {
//    char temp = str[i];
//    str[i] = str[length - i - 1];
//    str[length - i - 1] = temp;
//}
// 
//int main(void)
//{
//	char str[] = "abcdef123";
//	inverse(str);
//	cout << str << endl;
//}//编程117题

//bool check(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//        for (int j = i + 1; j < size - 1; j++)
//		{
//			if (arr[i]==arr[j])
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//    srand((int)time(0));
//    int n[10];
//    for (int i = 0; i < 10; i++)
//    {
//        n[i] = rand() % 101;
//    }
//    for (int j = 0; j < 10; j++)
//    {
//        cout << n[j] << ",";
//    }
//    cout << endl;
//    if (check(n, 10))
//        cout << "数据有重复！";
//    else
//        cout << "数据没有重复！";
//    cout << endl;
//    system("pause");
//}//58题

void printLines(const char* str){
    int start = 0, end = 0;
    while (str[end]!='\0'){
        if (str[end] == ',') {
            int length = end - start;
            char* Line = new char[length + 1];
            strncpy_s(Line, length + 1, &str[start], length);
            Line[length] = '\0';
            cout << Line << endl;
            delete[] Line;
            start = end + 1;
        }
        end++;
    }
    if (end > start) {
        int length = end - start;
        char* Line = new char[length + 1];
        strncpy_s(Line, length + 1, &str[start], length);
        Line[length] = '\0';
        cout << Line << endl;
        delete[] Line;
    }
}

int main()
{
	const char* str = "fortran,basic,pascal,java,c++,c#";
    printLines(str);
    return 0;
}
