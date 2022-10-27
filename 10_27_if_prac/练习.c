#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//打印1-100之间的数字

//int main()
//{
//    for (int i = 0; i <= 100; i++) {
//        if (i % 3 != 0) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//	for (int i = 3; i <= 100; i+=3) {
//		
//		printf("%d ", i);
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出。

//例如：
//输入：2 3 1

//输出：3 2 1

//通过swap函数实现两两互换

//void swap(int *x,int *y) {
//	int t = 0;
//
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//
//int main() {
//    int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		//两两比较，小了就交换
//		if (a < b) {
//			swap(&a, &b);
//		}
//		if (a < c) {
//			swap(&a, &c);
//		}
//		if (b < c) {
//			swap(&b, &c);
//		}
//		printf("%d %d %d", a, b, c);
//	}
//	return 0;
//}

//写一个代码：打印100~200之间的素数

//int main() {
//	for (int x = 100; x <= 200; x++)    //100-200得数
//	{
//		for (int i = 2; i <= x; i++)    //生成2-200的除数,手动设置排除1的干扰性
//		{
//			if (x == i)
//			{
//				printf("%d ", x); //当x==i时，输出x;得放在前面，否则无法输出，会直接退出循环
//			}
//			if ((x % i)==0)   //如果被整除就退出循环
//			{
//				break;
//			}
//
//		}
//	}
//}

// 打印1000年到2000年之间的闰年

//int main()
//{
//    for (int i = 1000; i <= 2000; i++)
//    {
//        if (i % 4 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    printf("考研，你要好好努力吗？(0/1)：");
//    while (scanf("%d", &n) != EOF) {
//        if (1 == n)
//        {
//            for (int i = 0; i <= 180; i++) {
//                if (180 == i) {
//                    printf("\n");
//                    printf("\n");
//                    printf("恭喜你上岸了！！！");
//                }
//                else
//                    printf("努力努力再努力！");
//            }
//        }
//        else
//            printf("\n搬砖也有美好的未来~");
//    }
//    return 0;
//}

//给定两个数，求这两个数的最大公约数

//例如：

//输入：20 40

//输出：20

//int main() {
//	int arr[11] = {0};
//	int max = 0;
//	for (int i = 0; i <= 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i <= 10; i++) {
//		if (arr[i] < arr[i + 1]) 
//		{
//			max = arr[i + 1];
//		}
//	}
//	printf("%d", max);
//}
//int main()
//{
//	int a, b;
//	int i;
//	while (scanf("%d %d", &a, &b) != EOF) 
//	{
//			for (i=a<b?a:b; i > 1; i--)
//			{
//				if (a % i == 0 && b % i == 0)
//				{
//					printf("%d", i);
//					break;  //满足条件退出循环
//				}
//			}
//
//	}
//	return 0;
//}
int main() {
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9 ; j++) 
		{
			if(i<=j)  //优化，避免打印重复的部分
			printf("%d*%d=%d ",i,j, i * j);
		}

	}
	return 0;
}
