#define _CRT_SECURE_NO_WARNINGS 1

//��ӡ����

//#include<stdio.h>
//#include<math.h>
//
//
//int is_primer(int x)
//{
//	for (int j = 2; j <= sqrt(x); j++)//���������ӱ���һ��<=sqrt(x)
//	{
//		if(0==x%j)
//		{
//			return 0;   //����������0
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
//	printf("\n����%d������",count);
//
//	return 0;
//}

//�ж�����

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
//			printf("%d��������\n", year);
//		}
//		else
//			printf("��������\n");
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

//swap����

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


//��ӡn�׳˷���
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