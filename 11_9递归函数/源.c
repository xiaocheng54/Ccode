#define _CRT_SECURE_NO_WARNINGS 1

//递归实现n的k次方
//#include<stdio.h>
//
//int nk(int n, int k)
//{
//	if (k > 0)     //递归有点像循环，只是循环条件写在内部
//		return n * nk(n, k - 1);
//	else
//		return 1;
//
//}
//
//int main()
//{
//	int n, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d",nk(n, k));
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//
//#include<stdio.h>
//
//int print(int n)
//{
//	if (n > 9)
//		return n % 10 + print(n / 10);
//	else
//		return n;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d",print(n));
//	return 0;
//}

//求累加(等差数列，公差为1)

#include<stdio.h>

int pint(int n)
{
	if (n > 1)
		return n + pint(n - 1); //n>1  递
	else
		return 1;//n== =1归
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", pint(n));

	return 0;
}