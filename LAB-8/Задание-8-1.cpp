#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int num;
	cout << "Введите пятизначное число" << endl;
	cin >> num;

	for (int i = 0; i < 5; i++)
	{
		int x = 0;
		x = num % 10;
		num = num / 10;
		cout << x << endl;
	}

	system("pause");
	return 0;
}