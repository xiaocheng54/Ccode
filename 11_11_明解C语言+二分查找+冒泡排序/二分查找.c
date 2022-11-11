#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,34 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1; //末元素下标等于元素个数-1
//	int target = 0;
//	int mid = 0;
//	scanf("%d", &target);
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;//防止下标溢出  right+left/2
//		if (arr[mid] > target)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < target)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//void binary(int* arr, int t, int sz)
//{
//	int left = 0;
//	int right =sz; //末元素下标等于元素个数-1
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;//防止下标溢出  right+left/2
//		if (arr[mid] > t)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < t)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,34 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int target = 0;
//	
//	scanf("%d", &target);
//
//	binary(arr, target, sz);//本质上传的是首元素的地址
//
//	return 0;
//}

//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 