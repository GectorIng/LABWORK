#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char ch;
	cout << "Введите латинскую букву в нижнем регистре" << endl;
	cin >> ch;

	ch = (char)((int)ch - 32);

	cout << ch << endl;

	system("pause");
	return 0;
}