#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble(int* arr, int sz)
{
	for (int i = 0; i <= sz - 1; i++)
	{
		for (int j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])//…˝–Ú√∞≈›≈≈
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
	for (int x = 0; x < sz; x++)
	{
		printf("%d ", arr[x]);
	}
}
int main()
{
	//√∞≈›≈≈–Ú
	int arr[] = { 1,5,4,7,8,9,3,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble(arr, sz);

	return 0;
}