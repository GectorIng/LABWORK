#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	char a;
	cout << "Введите искомый символ" << endl;
	cin >> a;

	string b;
	cout << "Введите строку" << endl;
	cin >> b;

	bool flag = false;

	for (int i = 0; i < b.length(); i++)
		if (b[i] == a) { cout << i + 1 << endl; flag = true; break; }
	

	if (!flag) cout << "Символ отсутсвует" << endl;

	system("pause");
	return 0;
}