#include <iostream>
#include "CMyString.h"
using namespace std;
int main()
{
	/*CMyString str = "123";
	CMyString str1 = "456789";
	str = "abc" + str + str1 + "efg";
	cout << str << endl;
	CMyString str2 = "ABC";
	str2 += "987";
	str2 += str1;
	cout << str2 << endl;*/
	CMyString str = "abcdEfg123";
	str.Upper();
	cout << str << endl;
	str.Lower();
	cout << str << endl;
	str.find('E');
	cout << str << endl;
	str.find("abed");
	cout << str << endl;
}
