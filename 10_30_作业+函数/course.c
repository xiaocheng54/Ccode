#define _CRT_SECURE_NO_WARNINGS 1

//����

//���������ֵ

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
//	printf("%d��%d�нϴ������%d",a,b,max);
//
//	return 0;
//}

//swap������ʵ�ֽ�����������

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
//	swap(&a, &b);          //��ֵ�������ı��x,y��ַ�ϵ����ݣ��ı䲻��a,b�ϵ����ݡ����βθı䲻Ӱ��ʵ��
//                           //�ĳɴ�ַ�������Խ�����⣬int *p=&a;
//	printf("%d %d", a, b);
//
//	return 0;
//
//}

//�ж��������100-200,��������

//#include<stdio.h>
//#include<math.h>
//
//int sushu(int i)
//{
//	for (int j = 2; j <= sqrt(i); j++)   //������i����д��������ˣ�����һ�����ӱ�Ȼ<=sqrt(i)
//	{
//		if (i % j == 0)
//		{
//			return 0;   //������������0
//		}
//	}
//	return 1;  //ѭ��������Ȼû�з���0�ļ�Ϊ����������1
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