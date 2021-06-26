#include "pch.h"
#include <iostream>

using namespace std;

int menu(int x, int up, int down);

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << menu(20, 15, 5) << endl;

	system("pause");
	return 0;
}

int menu(int x, int up, int down)
{
	int flag = 1;

	while (1)
	{
		if (x < up && x > down || flag == 0) break;

		cout << "1 - Новое вводное значение" << endl;
		cout << "2 - Новый нижний предел" << endl;
		cout << "3 - Новый верхний предел" << endl;
		cout << "0 - выход" << endl;
		cin >> flag;

		switch (flag)
		{
		case 1: { cin >> x; break; }
		case 2: { cin >> down; break;  }
		case 3: { cin >> up; break; }
		}
	}

	return x;
}