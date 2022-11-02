#define _CRT_SECURE_NO_WARNINGS 1

//打印素数

//#include<stdio.h>
//#include<math.h>
//
//
//int is_primer(int x)
//{
//	for (int j = 2; j <= sqrt(x); j++)//非素数因子必有一个<=sqrt(x)
//	{
//		if(0==x%j)
//		{
//			return 0;   //非素数返回0
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (1 == is_primer(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n共有%d个素数",count);
//
//	return 0;
//}

//判断闰年

//#include<stdio.h>
//int is_leap(int i)
//{
//	if ((i % 4 == 0 && i % 10 != 0) || i % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF) {
//		if (1 == is_leap(year))
//		{
//			printf("%d年是闰年\n", year);
//		}
//		else
//			printf("不是闰年\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 2000; i <= 3000; i++)
//	{
//		if (1 == is_leap(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//swap函数

//#include<stdio.h>
//
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}


//打印n阶乘法表
#include<stdio.h>

void list(int x)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	list(n);

	return 0;
}