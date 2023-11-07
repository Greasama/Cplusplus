#include "CMyString.h"
CMyString::CMyString()
{
	data = new char[1] {};
}

CMyString::CMyString(const char* str)
{
	len = strlen(str);
	data = new char[len + 1];
	memcpy(data, str, len);
	data[len] = '\0';
}

CMyString::CMyString(const CMyString& _Right)
{
	if (_Right.data != nullptr)
	{
		len = _Right.len;
		data = new char[len + 1];
		memcpy(data, _Right.data, len);
		data[len] = '\0';
	}
}

CMyString::~CMyString()
{
	delete[] data;
}
CMyString& CMyString::operator=(const CMyString& _Right)
{
	if (_Right.data != nullptr)
	{
		if (data != nullptr)
		{
			delete[] data;
		}
		len = _Right.len;
		data = new char[len + 1];
		memcpy(data, _Right.data, len);
		data[len] = '\0';
	}
	return *this;
}
CMyString& CMyString::operator=(const char* V)
{
	if (V != nullptr)
	{
		if (data != nullptr)
		{
			delete[] data;
		}
		len = strlen(V);
		data = new char[len + 1];
		memcpy(data, V, len);
		data[len] = '\0';
	}
	return *this;
}
char* CMyString::c_str()
{
	return data;
}
void CMyString::Add(CMyString str)
{
	char* dataNew = new char[len + str.len + 1];//根据两个字符长度，重新申请内存
	if (dataNew != nullptr)
	{
		if (data != nullptr)      //把第一个字符串，复制新的内存
		{
			if (len > 0)
			{
				memcpy(dataNew, data, len);
			}
			delete[] data;
		}
		memcpy(dataNew + len, str.data, str.len);//把第二个字符串，进行位置偏移，复制新的内存
		len += str.len;                    //设置两个字符长度和作为新长度
		dataNew[len] = 0;                      //把最后一个字节设置成\0
		data = dataNew;                       //把内存指向新申请内存
	}
}
void CMyString::Add(const char* V)
{
	if (V == nullptr)
		return;
	size_t charlen = strlen(V);//对到后面字符长度
	char* dataNew = new char[len + charlen + 1];//根据两个字符长度，重新申请内存
	if (dataNew != nullptr)
	{
		if (data != nullptr)      //把第一个字符串，复制新的内存
		{
			if (len > 0)
			{
				memcpy(dataNew, data, len);
			}
			delete[]  data;
		}
		memcpy(dataNew + len, V, charlen);//把第二个字符串，进行位置偏移，复制新的内存
		len += charlen;               //设置两个字符长度和作为新长度
		dataNew[len] = 0;                  //把最后一个字节设置成\0
		data = dataNew;                    //把内存指向新申请内存
	}
}
CMyString CMyString::operator+(CMyString c1)
{
	CMyString tmp(*this);
	tmp.Add(c1);
	return tmp;
}
CMyString CMyString::operator+(const char* V)
{
	CMyString tmp(*this);
	CMyString tmp1(V);
	tmp.Add(V);
	return tmp;
}
CMyString operator+(const char* c1, CMyString c2)
{
	CMyString tmp(c1);
	tmp.Add(c2);
	return tmp;
}

CMyString& CMyString::operator+=(CMyString s1)
{
	Add(s1);
	return *this;
}

CMyString& CMyString::operator+=(const char* V)
{
	Add(V);
	return *this;
}

void CMyString::Upper()
{
	for (int i = 0; i < len; i++)
	{
		if (data[i] >= 'a' && data[i] <= 'z') {
			data[i] -= 32;
		}
	}
}

void CMyString::Lower()
{
	for (int i = 0; i < len; i++)
	{
		if (data[i] >= 'A' && data[i] <= 'Z') {
			data[i] += 32;
		}
	}
}

int CMyString::find(char C)
{
	for (int i = 0; i < len; i++)
	{
		if (data[i] == C) {
			return i;
		}
	}
	return -1;
}

bool cmpStr(const char* str1, const char* str2, size_t len)//判断
{
	for (int j = 0; j < len; j++)
	{
		if (str1[j] != str2[j]) {
			return false;
		}
	}
	return true;
}

int CMyString::find(const char* str)
{
	if (str == nullptr || len == 0)
		return -1;
	size_t len2 = strlen(str);
	if (len2 == 0 || len < len2)
		return -1;
	for (size_t i = 0; i < len - len2; i++)
	{
		if (cmpStr(str, data + i, len2))
			return (int)i; 
	}
	return -1;
}

ostream& operator<<(ostream& os, CMyString& my_data)
{
	os << my_data.c_str();
	return os;
}