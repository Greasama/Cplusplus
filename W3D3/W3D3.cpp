#include <iostream>
#include<string>
using namespace std;

//class CMycout
//{
//public:
//	CMycout& operator<<(const char* pstr) {
//		printf_s("%s", pstr);
//		return *this;
//	}
//	CMycout& operator<<(char c) {
//		printf_s("%c", c);
//		return *this;
//	}
//	CMycout& operator<<(int a) {
//		printf_s("%d", a);
//		return *this;
//	}
//};
//int main()
//{
//	CMycout mycount;
//	char c = 'c';
//	mycount << "a" << "b" << "\n";
//	((mycount.operator<<("a")).operator<<("b")).operator<<("\n");
//	mycount = mycount.operator<<("a");
//	mycount = mycount.operator<<("b");
//	mycount.operator<<("\n");
//	mycount << (int)c << "\n";
//	mycount << c << "\n";
//	cout << (int)c << "\n";
//	cout << c << "\n";
//}//cout<<符号的定义

//int main()
//{
//	string str;
//	cout << "输入一个字符串：\n";
//	cin >> str;
//	size_t index = str.find('0');
//	if (index != (size_t)-1)
//	{
//		string str1 = str.substr(0, index);
//		string str2 = str.substr(index + 1);
//		cout << "0的前面是：" << str1 << endl;
//		cout << "0的后面是：" << str2 << endl;
//	}
//	else {
//		cout << "字符串中没有0";
//	}
//}

//string toUpper(const string& str)
//{
//	string temp;
//	for (int i = 0; i < str.length(); i++){
//		if (str[i] >= 'a' && str[i] <= 'z'){
//			temp += (str[i] - 32);//‘a'-'A'=32
//		}
//		else{
//			temp += str[i];
//		}
//	}
//	return temp;
//}
//
//string toLower(const string& str)
//{
//	string temp;
//	for (int i = 0; i < str.length(); i++){
//		if (str[i] >= 'A' && str[i] <= 'Z'){
//			temp += (str[i] + 32);//‘a'-'A'=32
//		}
//		else{
//			temp += str[i];
//		}
//	}
//	return temp;
//}
//
//int main()
//{
//	string str;
//	cout << "输入一个字符串：\n";
//	cin >> str;
//	string s1 = toUpper(str);
//	cout << s1 << endl;
//	string s2 = toLower(str);
//	cout << s2 << endl;
//}

//string inverse(const string& str)
//{
//	string temp;
//	for (int i = (int)str.length()-1; i >= 0; i--)
//	{
//		temp += str[i];
//	}
//	return temp;
//}
//int main()
//{
//	string str;
//	cout << "输入一个字符串：\n";
//	cin >> str;
//	string str1 = inverse(str);
//	cout << str1 << endl;
//}//字符串反转，编程125

//string trim(const string& str)
//{
//	string temp;
//	int start = -1;//防止空的预处理
//	for (int i = 0; i < str.length(); i++)
//	{
//		start = i;
//		if (str[i] != ' ')
//		{
//			break;
//		}
//	}
//	if (start == str.length() - 1)//全为空格，判定
//	{
//		return temp;
//	}
//
//	int end = -1;
//	for (int i = str.length() - 1; i >= 0; i--)
//	{
//		end = i;
//		if (str[i] != ' ')
//		{
//			break;
//		}
//	}
//	temp = str.substr(start, end - start + 1);
//	return temp;
//}
//int main()
//{
//	string str = " a Bc   ";
//	string str1 = trim(str);
//	cout << str1 << endl;
//}//清除左右空格

//string replace(const string& str, char oldchar, char newchar)
//{
//	string temp;
//	size_t len = str.length();
//	for (int i = 0; i < len; i++) {
//		if (str[i] == oldchar) {
//			temp += newchar;
//		}
//		else {
//			temp += str[i];
//		}
//	}
//	return temp;
//}
//
////string replace(const string& str, const string& oldstr, const string& newstr)
////{
////	string temp = str;
////	size_t pos = 0;
////	while ((pos = temp.find(oldstr, pos)) != string::npos) {
////		temp.replace(pos, oldstr.length(), newstr);
////		pos += newstr.length();
////	}
////	return temp;
////}//自己作答：转出位置，用find（复杂了）
//string newreplace(const string& str, const char* oldchar, const char* newchar)
//{
//	string temp;
//	size_t len = str.length();
//	size_t oldlen = strlen(oldchar);
//	for (size_t i = 0; i < len; i++) {
//		string substr = str.substr(i, oldlen);
//		if (substr == oldchar) {
//			temp += newchar;
//			i += oldlen - 1;
//
//		}
//		else {
//			temp += str[i];
//		}
//	}            
//	return temp;
//}//老师参考：size_t oldlen = strlen(oldchar);
//
//int main()
//{
//	string str = "S1NGF1RY1U";
//	string str1 = replace(str,'1','O');
//	cout << str1 << endl;
//	string str2 = newreplace(str, "S1", "SO");
//	cout << str2 << endl;
//}//替换

