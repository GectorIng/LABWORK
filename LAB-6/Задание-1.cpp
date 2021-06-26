#include "pch.h"
#include <iostream>

using namespace std;

int max3(int a, int b, int c);

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << max3(5, 15, 10) << endl;

	system("pause");
	return 0;
}

int max3(int a, int b, int c)
{
	if (c > a && c > b) return c;
	if (b > a && b > c) return b;
	else return a;
}