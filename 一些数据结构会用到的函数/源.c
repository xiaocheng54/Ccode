#define _CRT_SECURE_NO_WARNINGS 1


/*//swap()交换两个数*/
//#include<stdio.h>
//
//void swap(int* x, int* y)  //传值函数，形参改变不影响实参，所以的传址
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
//	swap(&a, &b);  //int *x=&a;传址
//	printf("%d %d", a, b);
//
//	return 0;
//}

/**///max()输出两者较大的最大值
//#include<stdio.h>
//
//int max(int x, int y)
//{
//	return(x > y ? x : y);
//	//if (x > y) {
//	//	return x;
//	//}
//	//else
//	//	return y;
//}
//
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", max(a, b));
//
//	return 0;
//}

//*阶乘函数

//#include<stdio.h>
////阶乘实现
////int print(int n)
////{
////	if (1==n)
////		return 1;
////	return n * print(n - 1);
////}
//
////循环实现
//int print(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d" ,print(n));
//
//	return 0;
//}

#include<stdio.h>

//递归实现  化大为小
//int print(int n)
//{
//	if(n<=2)
//	return 1;
//	return print(n - 1) + print(n - 2);   //化大为小  从n开始往下，每个x会被重复计算很多次  时间复杂度高O（2^n）
//}

//迭代循环   从小到大
int print(int n)
{
	int a = 1;
	int b = 1;
	int ret = 0;
	if (n <= 2)
		return 1;
	while(n>2)    //从3项开始算，不会有重复多算的数值  时间复杂度等于循环次数O（n）
	{
		n--;
		ret = a + b;
		a = b;
		b = ret;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", print(n));

	return 0;
}