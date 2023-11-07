#include <iostream>
using namespace std;

//void inverse(char* str)
//{
//	int count = (int)strlen(str) / 2;
//	int last = (int)strlen(str) - 1;
//	for (int i = 0; i <= count; i++)
//	{
//		char temp = str[i];
//		str[i] = str[last - i];
//		str[last - i] = temp;
//	}
//}
//int main()
//{
//	char str[] = "abcdef123";
//	inverse(str);
//	cout << str << endl;
//}//117讲解

//int main()
//{
//	const char* str = "fortran,basic,pascal,java,c++,c#";
//	const char* p = str;
//	while (*p)
//	{
//		if (*p == ',')
//		{
//			cout << endl;
//		}
//		else
//		{
//			cout << *p;
//		}
//		p++;
//	}
//}//185讲解

//void inverse(char* str)
//{
//	char g[100] = "";//原错误：空间为0出现的溢出
//	for (int i = strlen(str) - 1; i >= 0; i--){
//		int j = strlen(str) - i - 1;
//		g[j] = str[i];
//	}
//	cout << g << endl;
//	delete[] g;
//}
//int main()
//{
//	char str[] = "abcdef123";
//	inverse(str);
//}