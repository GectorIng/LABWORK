#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string subSwap(string str, string pstr, string inStr);

int main()
{
	setlocale(LC_ALL, "RUS");

	string str;
	cout << "Введите строку" << endl;
	cin >> str;
	
	string outStr;
	cout << "Введите искомую подстроку" << endl;
	cin >> outStr;

	string inStr;
	cout << "Введите строку которой будет заменена подстрока" << endl;
	cin >> inStr;

	cout << "Оригинальная строка - " << str << endl;
	cout << "Искомая подстрока - " << outStr << endl;
	cout << "Замена на - " << inStr << endl;
	str = subSwap(str, outStr, inStr);
	cout << "Новая строка - " << str << endl;

	system("pause");
	return 0;
}

string subSwap(string str, string outStr, string inStr)
{
	string retStr;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == outStr[0])
		{
			int start = i;
			int count = 0;
			for (int j = 0; j < outStr.length(); j++)
			{
				if (str[start] == outStr[j]) { count++; start++; }
				else break;
			}

			if (count == outStr.length()) { retStr = retStr + inStr; i = i + outStr.length() - 1; }
		}

		else retStr = retStr + str[i];
	}

	return retStr;
}