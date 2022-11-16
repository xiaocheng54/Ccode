#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//double pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//	else if(k<0)
//		return 1.0 / (n * pow(n, k+1));
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//
//	return 0;
//}

//求n项累加和
//#include<stdio.h>
//
//int ret(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return n + ret(n - 1);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = ret(n);
//	printf("%d", x);
//
//	return 0;
//}



//逆序字符串
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////非递归方式
////void reverse_str(char* str)
////{
////	int len = my_strlen(str);
////	char* left = str;
////	char* right =str+len - 1; //指针需要有其实str，跟下标不一样
////	while (left < right) {
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////}
//
////递归形式
//void reverse_str(char* str)
//{
//	int len = my_strlen(str) - 1;
//	int tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//		reverse_str(str+1);
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	reverse_str(str);
//	printf("%s", str);
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int str[] = { 0 };
//	scanf("%s", str);
//	printf("%d", my_strlen(str));
//
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	while(i<n)
	{
		int j = 0;
		scanf("%d", &j);
		sum += j;
		i++;
	}
	printf("%d", sum);
}