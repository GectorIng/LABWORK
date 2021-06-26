#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string compress(string str);

int main()
{
	setlocale(LC_ALL, "RUS");

	string a;
	cout << "Введите строку" << endl;
	cin >> a;

	cout << "Оригинальная строка - " << a << endl;
	a = compress(a);
	cout << "Сжатая строка - " << a << endl;

	system("pause");
	return 0;
}

string compress(string str)
{
	string str2;
	int count = 1, sym;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == str[i + 1])
		{
			count = count + 1;
			if (str[i + 1] != str[i + 2])
			{
				sym = (int)str[i];
				str2 = str2 + '[' + to_string(sym) + '|' + to_string(count) + ']';
				count = 1;
				i++;
			}
		}
		else
		{
			str2 = str2 + str[i];
		}
	}
	return str2;
}