#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ʵ��n��k�η�
//#include<stdio.h>
//
//int nk(int n, int k)
//{
//	if (k > 0)     //�ݹ��е���ѭ����ֻ��ѭ������д���ڲ�
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

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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

//���ۼ�(�Ȳ����У�����Ϊ1)

#include<stdio.h>

int pint(int n)
{
	if (n > 1)
		return n + pint(n - 1); //n>1  ��
	else
		return 1;//n== =1��
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", pint(n));

	return 0;
}