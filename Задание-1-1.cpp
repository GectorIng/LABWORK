#include "pch.h"
#include <iostream>

using namespace std;

const int K = 10;

int main()
{
	setlocale(LC_ALL, "RUS");

	int arr[K];

	for (int i = 0; i < K; i++)
	{
		cout << "Введите элемент " << i + 1 << endl;
		cin >> arr[i];
	}

	for (int i = 0; i < K; i++)
		if (arr[i] % 2 == 0) arr[i] = 0;

	for (int i = 0; i < K; i++)
		cout << arr[i] << " ";

	cout << endl;

	system("pause");
	return 0;
}