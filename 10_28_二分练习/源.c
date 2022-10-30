#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() 
//{
////数组元素个数=数组所占内存/单个元素所占内存 n
//												 //数组最后一个元素小标=元素个数-1
//	int mid = 0; //记录中间元素下标，用于比较
//	int target = 0;  //需要查找的数
//	while (scanf("%d", &target) != EOF) {
//		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int left = 0;
//		int right = sizeof(arr) / sizeof(arr[0]) - 1;
//		while (left <= right) {
//			/*mid = (left + right) / 2;*/
//			mid = left + (right - left) / 2;  //避免mid越界
//			if (arr[mid] < target)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > target)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("找到了，下标是：%d", mid);
//				break;
//			}
//		}
//		if (left > right)
//			printf("找不到");
//	}
//	return 0;
//}

//关机小程序
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1) {
		printf("你的电脑将在60秒内关机，输入：我是猪  取消关机：\n");
		scanf("%s", &input);
		if (0 == strcmp(input, "我是猪")) {
			system("shutdown -a");
			printf("好的，猪先生，已为你取消关机>_<");
			break;
		}
	}
	return 0;
}