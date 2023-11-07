#include <iostream>
#include "basefun.h"
using namespace std;

void BA::showto2(long long n, int digit)
{
	for (int i = digit - 1; i >= 0; i--)
	{
		if ((n & (1 << i)) == 0)
		{
			cout << 0;
		}
		else
		{
			cout << 1;
		}
	}
}

void BA::showto16(long long n, int digit)
{
	int count = digit / 4;
	cout << "0x";
	for (int i = count - 1; i >= 0; i--)
	{
		int a = (n >> i * 4) & 0xF;
		if (a <= 9)
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
