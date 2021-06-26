#include "pch.h"
#include <iostream>

using namespace std;

const int K = 3;

int main()
{
	setlocale(LC_ALL, "RUS");

	int arr[K][K];

	for (int i = 0; i < K; i++)
		for (int j = 0; j < K; j++)
		{
			cout << "Введите элемент " << i + 1 << " " << j + 1 << endl;
			cin >> arr[i][j];
		}

	cout << "Определитель = " << (arr[0][0] * arr[1][1] * arr[2][2] + arr[2][0] * arr[0][1] * arr[1][2] + arr[1][0] * arr[2][1] * arr[0][2] - arr[2][0] * arr[1][1] * arr[0][2] - arr[0][0] * arr[2][1] * arr[1][2] - arr[1][0] * arr[0][1] * arr[2][2]) << endl;

	system("pause");
	return 0;
}