#include "pch.h"
#include <iostream>

using namespace std;

double avgArr(int* arr, int K);

int main()
{
	setlocale(LC_ALL, "RUS");

	int kol;
	cout << "Введите кол-во эл-ов массива" << endl;
	cin >> kol;

	int* arr = new int[kol];

	for (int i = 0; i < kol; i++) { cout << "Введите очередной элемент" << endl; cin >> arr[i]; }
	for (int i = 0; i < kol; i++) cout << arr[i] << " ";
	cout << endl;

	cout << "Среднее - " << avgArr(arr, kol) << endl;

	system("pause");
	return 0;
}

double avgArr(int* arr, int K)
{
	int sum = 0;

	for (int i = 0; i < K; i++)
		sum = sum + arr[i];

	return (float) sum / K;
}