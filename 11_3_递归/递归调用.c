#define _CRT_SECURE_NO_WARNINGS 1

//实现str()函数作用

//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	if (*str !=  '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//
//	return 0;
//}

////递归求阶乘
//#include<stdio.h>
////递归实现
//int f1(int n)
//{
//	
//	if (1 == n)
//		return 1;
//	else
//		return n * f1(n - 1);
//	
//}
////循环实现
//int f2(int n)
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
//	printf("%d\n", f1(n));
//	printf("%d\n", f2(n));
//	return 0;
//}

//斐波那契数列
//
//#include<stdio.h>
//
////递归思想：由大化小
//int fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib1(n - 1) + fib1(n - 2);
//}
//
////迭代想法：有小到大
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib1(n));
//	printf("%d\n", fib2(n));
//
//
//	return 0;
//}
