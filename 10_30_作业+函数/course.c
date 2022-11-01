#define _CRT_SECURE_NO_WARNINGS 1

//函数

//求两数最大值

//#include<stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max=get_max(a, b);
//	printf("%d和%d中较大的数是%d",a,b,max);
//
//	return 0;
//}

//swap函数，实现交换两个数字

//#include<stdio.h>
//
//void swap(int* p1, int* p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	swap(&a, &b);          //传值函数，改变的x,y地址上的内容，改变不了a,b上的内容。即形参改变不影响实参
//                           //改成传址函数可以解决问题，int *p=&a;
//	printf("%d %d", a, b);
//
//	return 0;
//
//}

//判断输出素数100-200,及数个数

//#include<stdio.h>
//#include<math.h>
//
//int sushu(int i)
//{
//	for (int j = 2; j <= sqrt(i); j++)   //非素数i总能写成两数相乘，其中一个因子必然<=sqrt(i)
//	{
//		if (i % j == 0)
//		{
//			return 0;   //不是素数返回0
//		}
//	}
//	return 1;  //循环结束仍然没有返回0的即为素数，返回1
//}
//
//
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (1==sushu(i) )
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}