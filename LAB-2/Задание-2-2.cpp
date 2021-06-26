#include "pch.h"
#include <iostream>

using namespace std;

const int K = 10;
void inserSort(int arr[], int n);

int main()
{
	setlocale(LC_ALL, "RUS");

	int arr[K];

	for (int i = 0; i < K; i++)
		cin >> arr[i];

	for (int i = 0; i < K; i++)
		cout << arr[i] << " ";
	cout << endl;

	inserSort(arr, K);
	
	for (int i = 0; i < K; i++)
		cout << arr[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

void inserSort(int arr[], int n)
{
	int i, j;
	for (i = 1; i < n; i++)
	{
		int x = arr[i];
		
		for (j = i - 1; j >= 0 && arr[j] > x; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}