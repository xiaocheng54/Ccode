#define _CRT_SECURE_NO_WARNINGS 1


/*//swap()����������*/
//#include<stdio.h>
//
//void swap(int* x, int* y)  //��ֵ�������βθı䲻Ӱ��ʵ�Σ����ԵĴ�ַ
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
//	swap(&a, &b);  //int *x=&a;��ַ
//	printf("%d %d", a, b);
//
//	return 0;
//}

/**///max()������߽ϴ�����ֵ
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

//*�׳˺���

//#include<stdio.h>
////�׳�ʵ��
////int print(int n)
////{
////	if (1==n)
////		return 1;
////	return n * print(n - 1);
////}
//
////ѭ��ʵ��
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

//�ݹ�ʵ��  ����ΪС
//int print(int n)
//{
//	if(n<=2)
//	return 1;
//	return print(n - 1) + print(n - 2);   //����ΪС  ��n��ʼ���£�ÿ��x�ᱻ�ظ�����ܶ��  ʱ�临�Ӷȸ�O��2^n��
//}

//����ѭ��   ��С����
int print(int n)
{
	int a = 1;
	int b = 1;
	int ret = 0;
	if (n <= 2)
		return 1;
	while(n>2)    //��3�ʼ�㣬�������ظ��������ֵ  ʱ�临�Ӷȵ���ѭ������O��n��
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