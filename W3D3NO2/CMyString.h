#pragma once
#include <iostream>
using namespace std;
class CMyString
{
private:
	char* data = nullptr;
	size_t len = 0;
public:
	CMyString();
	CMyString(const char* str);
	CMyString(const CMyString& _Right);
	~CMyString();
	void Add(CMyString str);
	void Add(const char* V);
	CMyString& operator=(const CMyString& _Right);
	CMyString& operator=(const char* V);
	CMyString operator+(CMyString c1);
	CMyString operator+(const char* V);
	CMyString& operator+=(CMyString s1);
	CMyString& operator+=(const char* V);
	void Upper();
	void Lower();
	int find(char C);//当存在要查找的字符时返回字符的位置，找不到返回-1
	int find(const char* str);
	char* c_str();
};

ostream& operator<<(ostream& os, CMyString& my_data);
CMyString operator+(const char* c1, CMyString c2);